#include <iostream>
#include <fstream>

using namespace std;

int main() {
  int i;
  ofstream f;

  f.open("sample.out");

  f << "Hi\n";
  f << "How are you\n";
  f << "You have made a new file\n";
  f.close();

  return 0;
}
