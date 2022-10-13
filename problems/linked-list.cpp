#include <bits/stdc++.h>
using namespace std;
struct Node {
  int value;
  Node* next;
};
Node* head;
void Insert(int value) {
  Node* newNode = new Node;
  newNode->value = value;
  newNode->next = head;
  head = newNode;
};
void Print() {
  Node* newNode = head;
  cout << "The List is ";
  while (head != NULL) {
    cout << newNode->value << " ";
    newNode = newNode->next;
  }
}

int main() {
  head = NULL;
  cout << "How many value you want to insert?" << endl;
  int n, value;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "Enter the number ";
    cin >> value;
    Insert(value);
  }
  Print();

  return 0;
};