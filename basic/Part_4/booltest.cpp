#include <iostream>
#include <stdlib.h>

using namespace std;

void your_code() {
  // Make your boolean statement!

  // Make below three statement to be true
  bool t1 = true;
  bool t2 = false;
  bool t3 = true;

  // Make below three statement to be false
  bool f1 = false;
  bool f2 = false;
  bool f3 = true;

  // DO NOT AMEND THIS CLAUSE
  test_pass_fail(t1, t2, t3, f1, f2, f3);
}

/* DO NOT AMEND THE CODE BELOW */
void if_fail() {
  cout << "FAIL" << endl;
  exit(EXIT_FAILURE); 
}

void if_pass() {
  cout << "pass" << endl;
}

void test_pass_fail(int b1, int b2, int b3, int b4, int b5, int b6) {
  cout << "Boolean 1: ";
  if (!b1) {
    if_fail();
  }
  if_pass();

  cout << "Boolean 2: ";
  if (!b2) {
    if_fail();
  }
  if_pass();

  cout << "Boolean 3: ";
  if (!b3) {
    if_fail();
  }
  if_pass();

  cout << "Boolean 4: ";
  if (!b4) {
    if_fail();
  }
  if_pass();

  cout << "Boolean 5: ";
  if (!b5) {
    if_fail();
  }
  if_pass();

  cout << "Boolean 6: ";
  if (!b6) {
    if_fail();
  }
  if_pass();
}

int main() {
  your_code();
  return 0;
}
