#include <bitset>
#include <iostream>

using namespace std;

int main() {
  long long n, factorial = 1;

  cout << "input a number: ";

  while (true) {
    cin >> n;
    if (n > 25) {
      cout << "input a number between 0 and 25 inclusive" << endl;
    } else {
      break;
    }
  }

  if (n >= 0) {
    for (int i = 1; i <= n; i++) {
      factorial *= i;
    }
    cout << "factorial of a number is: " << factorial << endl;
  } else {
    cout << "factorial is not defined on negative numbers" << endl;
  }
}
