#include <bits/stdc++.h>
using namespace std;

int main() {
  int rows, columns, n;
  cin >> n;
  for (rows = 1; rows < n; rows++) {
    for (columns = (n/2+1); columns < n; columns++) {
      if (rows == 1) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
  }

    return 0;

  };