#include <iostream>

using namespace std;

/*
 * This function returns index of element k in array a, if element not found
 * return value is -1
 */
int linear_search(int n, int *a, int k) {
  for (int i = 0; i < n; i++) {
    if (a[i] == k) {
      return i;
    }
  }
  return -1;
}

int main(int argc, char *argv[]) {

  /*
  cout << "argc: " << argc << endl;

  for(int i = 0; i < argc; i++) {
    cout << argv[i] << endl;
  }
  */

  int n = 8; // size of the array
  int a[] = {7, 2, 4, 9, 10, 15, 3, 4};

  // interating arguments from 1 .. argc
  for (int i = 1; i < argc; i++) {
    // finding the index of an argument
    int k = atoi(argv[i]);
    int ind = linear_search(n, a, k);

    // index processing
    if (ind != -1) {
      cout << "index of " << k << " is " << ind << endl;
    } else {
      cout << "element not found" << endl;
    }
  }

  /*
    cout << "input array size: ";
    cin >> n;


    int a[n];

    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
  */
}
