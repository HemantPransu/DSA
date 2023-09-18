#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {

  /*--> IN VECTOR ARRAY
  vector<int> v = {1, 2, 3, 4, 5, 6, 7};
  if (binary_search(v.begin(), v.end(), 4)) {
    cout << "found";
  } else {
    cout << "not found";
  }*/

  int arr[7] = {1, 2, 3, 4, 5, 6, 7};
  int size = 7;
  if (binary_search(arr, arr + size, 4)) {
    cout << "found";
  } else {
    cout << "not found";
  }
  return 0;
}