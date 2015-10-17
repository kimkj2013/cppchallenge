#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  if (argc > 1) {
    cout << "You have argued " << argv[1] << "!" << endl;
  }
  else {
    cout << "You have not argued anything right?" << endl;
  }
  return 0;
}
