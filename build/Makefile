CXX = g++
CXXFLAGS = -std=c++17 -Wall

SRC_DIR = ../src
OBJ_DIR = ../build
LIB_DIR = ../lib

# Find all subdirectories under LIB_DIR
LIB_SUBDIRS := $(shell find $(LIB_DIR) -type d)

# Add -I flag for each subdirectory under LIB_DIR
INCLUDES := $(addprefix -I,$(LIB_SUBDIRS))

# List all source files
SRCS := $(wildcard $(SRC_DIR)/*.cpp)

# Generate object file names by replacing .cpp with .o
OBJS := $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

# Main executable name
EXEC := $(OBJ_DIR)/shell

# Default target
all: $(EXEC)

# Rule to link object files into executable
$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to compile source files into object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c -o $@ $<

# Clean target to remove object files and executable
clean:
	rm -f $(OBJS) $(EXEC)

