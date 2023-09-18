#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 1; i < n; i++) {
    for (int j = 1; j < n - i; j++) {
      cout << " ";
    }
    for (int k = 1; k < i; k++) {
      cout << "* ";
    }
    cout << endl;
  }
  for (int a = 1; a < n; a++) {
    for (int b = 1; b < a; b++) {
      cout << " ";
    }
    for (int c = 1; c < n - a; c++) {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}