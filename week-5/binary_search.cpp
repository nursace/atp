#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

/*
  * INPUT: a[n]: a1 <= a2 <= a3 <= a4 <= a5 <= a6; k - int 
  * find k in array `a`
*/

int binary_search(int *a, int n, int k) {
  int index = -1;
  int l = 0, r = n -1;
  while(l <= r) {
    // divison rounding to floor
    int mid = (l + r) / 2;

    if (a[mid] < k) {
      l = mid + 1;
    } else if (a[mid] > k) {
      r = mid - 1;
    } else {
      index = mid;
      break;
    }
  }
  return index;
}


int main() {

  // set seed 
  srand(1);

  const int n = 20;

  int a[n];

  for(int i = 0; i < n; i++) {
    a[i] = rand() % 100;
    cout << a[i] << " ";
  }

  cout << endl;
  // sort array
  sort(a, a + n);
  cout << "sorted array\n";
  for(int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  cout << "\ninput a number for search: ";
  int k; cin >> k;
  int index = binary_search(a, n, k);

  if (index == -1) {
    cout << k << " not found" << endl;
  } else {
    cout << k << " found at index: " << index << endl;
  }

}
