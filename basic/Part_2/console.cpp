#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
  /* DO NOT AMEND THE CODE TILL THE POINT I LET YOU DO */
  char *c = (char*) malloc(256);
  cout << "Enter anything you want: ";
  cin >> c;

  /* HERE COMES YOUR CODE */

  /* DO NOT AMEND THE CODE AFTER THIS POINT */
  cout << "This shall be what you have written: " << c << endl;
  free(c);
  return 0;
}
