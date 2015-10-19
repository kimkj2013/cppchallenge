#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

const int DEFAULT_ARG_COUNT = 5;

int main(int argc, char* argv[]) {
  int args, i;
  if (argc < 2) {
    args = DEFAULT_ARG_COUNT;
  } else {
    args = atoi(argv[1]);
  }

  cout << "Write a arithmetic expression you want to calculate (i.e. 1 + 1): \n";

  /*
   * Here, you have to prompt to get the arguments.
   * All arguments will be forms of arthmetic expressions.
   * For example, the user has to type '1 + 1' or '2 * 4'.
   * After writing all the expressions, the program will
   * make a file containing the expressions and the results.
   * For example, if the user typed '1 + 1' and the file
   * should contain '1 + 1 = 2'.
   */

  return 0;
}
