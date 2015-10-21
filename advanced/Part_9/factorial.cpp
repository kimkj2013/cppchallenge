#include <iostream>

using namespace std;

// Calculate n factorial
int factorial(int n) {
  if (n == 0) return 1; // 0! = 1
  return n * factorial(n - 1); // n! = n * (n-1)!
}

int main() {
  int args;
  cin >> args;
  cout << factorial(n) << endl;
  return 0;
}
