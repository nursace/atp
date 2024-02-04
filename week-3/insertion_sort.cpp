#include <iostream>

using namespace std;

int main() {

  const int n = 1000;

  int a[n];

  // populating array with random data
  for (int i = 0; i < n; i++) {
    a[i] = rand() % 1000;
  }

  // sorting with insertion sort algo
  for (int i = 1; i < n; i++) {
    int key = a[i];

    int j = i - 1;

    while (j >= 0 && a[j] > key) {
      a[j + 1] = a[j];
      j = j - 1;
    }

    a[j + 1] = key;

    // a[0:i] -> sorted: loop invariant
  }

  // check for sorted array
  for (int i = 0; i < n - 1; i++) {
    if (a[i] > a[i + 1]) {
      cout << "sequence is not sorted" << endl;
      return 0;
    }
  }

  cout << "sequence is sorted" << endl;
}
