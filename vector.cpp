#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
  vector<int> vec;
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);
  vec.push_back(5);
  vec.push_back(6);
  vec.pop_back();
  cout << vec[4];
  return 0;
}
