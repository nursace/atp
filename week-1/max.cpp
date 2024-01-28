#include <iostream>

using namespace std;

// branched algorithm
// разветвленный алгоритм
int main() {
  int a, b, c, max;
  cout << "input a first number: ";
  cin >> a;

  cout << "input a second number: ";
  cin >> b;

  cout << "input a third number: ";
  cin >> c;

  if (a >= b && a >= c) {
    max = a;
  }
  if (b >= a && b >= c) {
    max = b;
  }
  if (c >= a && c >= b) {
    max = c;
  }

  cout << "max number is: " << max << endl;

  
}
