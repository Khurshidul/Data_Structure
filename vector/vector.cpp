#include <bits/stdc++.h>
#include <vector>
using namespace std;

void display(vector<int> &v) {
  cout << "All values are ";
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " " << endl;
    cout << v.at(i) << " " << endl;
  }
  cout << endl;
}

int main() {
  vector<int> vec1;
  int element, size;
  cout << "Enter the size : ";
  cin >> size;
  for (int i = 0; i <= size; i++) {
    cout << "Enter the element ";
    cin >> element;
    vec1.push_back(element);
  }

  display(vec1);
  vector<int>::iterator it = vec1.begin();
  vec1.insert(it + 2, 14);
  display(vec1);

  return 0;
};