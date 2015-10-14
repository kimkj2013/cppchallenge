/* DO NOT AMEND THIS FILE */

#include <iostream>
#include "recursion_set.h"

void print_pass() {
  std::cout << "PASS" << std::endl;
}

void print_fail() {
  std::cout << "FAIL" << std::endl;
}

int main(int argc, char* argv[]) {
  if (argc > 1) { // If there is a test argument

  }
  else { // Normal mode
    std::cout << "Testing exponential... ";
    if (exponential(2, 1) != 2) {
      print_fail();
      return 0;
    }
    if (exponential(3, 4) != 81) {
      print_fail();
      return 0;
    }
    if (exponential(6, 3) != 216) {
      print_fail();
      return 0;
    }
    print_pass();
  }
  return 0;
}
