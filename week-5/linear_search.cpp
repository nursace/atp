#include <iostream>
#include <cstdlib>

using namespace std;

int linear_search(int *a, int n, int k) {
  int index = -1;
  for(int i = 0; i < n; i++) {
    if (a[i] == k) {
      index = i;
      break;
    }
  }
  return index;
}

int main() {

  // set seed 
  srand(time(NULL));

  const int n = 20;

  int a[n];

  for(int i = 0; i < n; i++) {
    a[i] = rand() % 100;
    cout << a[i] << " ";
  }

  cout << "\ninput a number for search: ";
  int k; cin >> k;

  /*
    * INPUT: a[n], k;
    * find k in array `a`
  */

  int index = linear_search(a, n, k);

  if (index == -1) {
    cout << k << " not found\n";
  } else {
    cout << k << " found at index: " << index << endl;
  }

  // DRY - don't repeat yourself
  // WET - we enjoy typing


}
