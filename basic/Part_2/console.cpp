#include <iostream>

using namespace std;

int main() {
  char *c = malloc(256);
  cout << "Enter anything you want: ";
  cin >> c;
  cout << "This shall be what you have written: " << c << endl;
  free(c);
  return 0;
}
