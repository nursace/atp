#include <iostream>

using namespace std;

void insertion_sort(int a[], int n) {

  for(int i = 1; i < n; i++) {
    int key = a[i];

    // a[0 : i - 1]
    
    //  [5, 2, 4, 6, 1, 3]
    //   0  1  2  3  4   5
    //
    // i = 1
    // key = 2
    //
    // j = 0 
    // a[j] = 5
    // a[1] = 5
    //
    //  [5, 5, 4, 6, 1, 3]
    //   0  1  2  3  4   5
    //
    //
    int j = i - 1;

    while (j >= 0 && a[j] > key) {
      a[j + 1] = a[j];
      j -= 1;
    }
    
    a[j + 1] = key;
  }

}

int main() {
  const int n = 6;
  // cout << "Input array size: ";
  // cin >> n;

  // int *a = new int[n];
  int a[n];

  cout << "input array elements (6): ";
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  insertion_sort(a, n);

  cout << "sorted array: ";

  for(int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

}
