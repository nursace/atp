#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

  const int n = 3; // number of rows
  const int m = 4; // number of cols

  int a[n][m] = {{7, 2, 4, 9}, {10, 15, 3, 4}, {-5, 49, 1, 27}};

  int k = atoi(argv[1]);

  cout << "k: "  << k << endl;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j] == k) {
        cout << "element " << k << " found at position: (" << i << "," << j << ")" << endl;
      }
    }
  }
}
