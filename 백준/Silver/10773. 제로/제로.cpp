#include <bits/stdc++.h>

using namespace std;

int nums[100000];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  auto it = nums;
  int sum = 0;
  while (n--) {
    int v;
    cin >> v;
    sum += v;
    if (v) {
      *it++ = v;
    } else {
      sum -= *--it;
    }
  }

  cout << sum;

  return 0;
}
