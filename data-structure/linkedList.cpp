#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  Node* link;
};
Node* head;
void Insert(int value, int position) {
  Node* newNode1 = new Node();
  newNode1->data = value;
  newNode1->link = NULL;
  if (position == 1) {
    newNode1->link = head;
    head = newNode1;
    return;
  }
  Node* newNode2 = head;
  for (int i = 0; i < position - 2; i++) {
    newNode2 = newNode2->link;
  }
  newNode1->link = newNode2->link;
  newNode2->link = newNode1;
}
void PrintList() {
  Node* newNode = head;
  cout << "The List is ";
  while (newNode != NULL) {
    cout << " " << newNode->data;
    newNode = newNode->link;
  }
  cout << endl;
}

int main() {
  head = NULL;
  Insert(2, 1);
  Insert(3, 2);
//   Insert(4, 0);
  Insert(5, 2);
  Insert(1, 1);
  PrintList();

  return 0;
};