#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  cout << "Hello, ";
  if (argc < 2) {
    cout << "world!" << endl;
  }
  else {
    cout << argv[1] << "!" << endl;
  }
  return 0;
}
