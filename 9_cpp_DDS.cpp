#include<iostream>
using namespace std;
int A[8] = {9, 3, 7, 1, 5, 6 ,2 ,4};
int n = 8;
void swap(int p, int q) {
  int t;
  t = A[p];
  A[p] = A[q];
  A[q] = t;
} 
void show() {
  for (int k = 0; k <= n - 1; k++) {
    cout << A[k] << endl;
  }
}
int main() {
  cout << "Real - Array :(" << endl;
  show();
  for (int i = 0; i <= n - 2; i++) {
    for (int j = i + 1; j <= n - 1; j++) {
      if (A[i] > A[j]) {
        swap(i, j);
      }
    }
  }
  cout << "Array - After Selection Sort :)" << endl; 
  show();
  return 0;
}