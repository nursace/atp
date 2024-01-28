#include <iostream>

using namespace std;

int main () {
  // 1...1000368
  int n; // 4 byte

  do {
    cout << "input a positive number: ";
    cin >> n;
  } while (n < 0);

  unsigned int sum = 0;
  int k = 0;

  while (n --) {
    sum = sum + n;
  }

  cout << "sum: " << sum << endl;
}
