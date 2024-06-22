#include <iostream>
#include "../lib/window/window.h"
#include "../lib/test/test.h"

using namespace std;

int main (int argc, char *argv[]) {

  cout << "hello world";
  Calculator calc;

  cout << calc.add(5, 3);

  Test test;
  test.t(5);

  return 0;
}
