#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int m; cin >> m;
  vector<int> a1(m); for (auto &i: a1) cin >> i;
  int n; cin >> n;
  vector<int> a2(n); for (auto &i: a2) cin >> i;

  sort(a1.begin(), a1.end());
  sort(a2.begin(), a2.end());

  int cnt = 0;
  for (int i = 0, j = 0; i < a1.size() && j < a2.size(); i ++) {
    while (a1[i] - a2[j] > 1) j ++;
    if (a1[i] - a2[j] >= -1) cnt ++, j ++;
  }

  cout << cnt << endl;

  return 0;
}