#include <iostream>

using namespace std;

// Find the nth number of fibonacci sequence
int fibonacci(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  int args; // The argument to the function
  cin >> args; // Get the value from the keyboard input
  cout << fibonacci(args) << endl; // Show the result
  return 0;
}
