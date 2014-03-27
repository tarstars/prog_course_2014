#include <iostream>

using namespace std;

void arrayDemo() {
  int n = 10;

  int *pDat = new int[n];

  int *pa1;

  pa1 = pDat + 3;

  *pa1 = 10;

  *(3 + pDat) = 10;
  3[pDat] = 10;

  cout << "pDat[3] = " << pDat[3] << endl;

  int *it = pDat;
  ++it;
  *it;

  delete[] pDat;
}

class Node {
public:
  int val;
  Node *pNext;
};

void stackVariableDemo() {
  Node a;
  
  a.val = 5;
  a.pNext = 0;
}

Node*
initList() {
  Node* ret;

  ret = new Node;
  ret->pNext = 0;

  return ret;
}

Node*
listAdd(Node* p, int v) {
  Node* pret;

  pret = new Node;
  pret -> pNext = p;
  pret -> val = v;

  return pret;
}
  
void print(Node* pList) {
  Node *it = pList;

  while(it->pNext != 0) {
    cout << (it -> val) << " ";
    it = it -> pNext;
  }
}

int main() {
  int val;
  Node *pList = initList();

  while(cin >> val) {
    pList = listAdd(pList, val);
  }

  print(pList);
}
