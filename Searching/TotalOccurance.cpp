#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v = {1, 3, 5, 7, 7, 7, 7, 7, 7, 9};
  int target = 7;

  auto a = upper_bound(v.begin(), v.end(), target);
  auto b = lower_bound(v.begin(), v.end(), target);
  cout << a - b + 1;

  return 0;
}