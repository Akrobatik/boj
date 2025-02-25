#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> stk;
  stk.reserve(n);
  int64_t sum = 0;
  while (n--) {
    int now;
    cin >> now;
    auto it = lower_bound(stk.begin(), stk.end(), now, greater<>());
    sum += (stk.end() - it) + (it != stk.begin());
    stk.resize(upper_bound(it, stk.end(), now, greater<>()) - stk.begin());
    stk.push_back(now);
  }
  cout << sum;

  return 0;
}
