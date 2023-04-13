#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
  int m; cin >> m;
  vector<int> a(m); for (int i = 0; i < m; i ++) cin >> a[i];

  int idx = -1;
  vector<pair<int, int> > res;
  for (int i = 1; i < m; i ++) {
    if (a[i] != a[0]) {
      idx = i;
      res.push_back({ 1, i + 1 });
    }
  }

  if (idx == -1) {
    cout << "NO" << endl;
    return;
  }

  for (int i = 1; i < m; i ++) {
    if (a[i] == a[0]) res.push_back({ idx + 1, i + 1});
  }

  cout << "YES" << endl;
  for (auto &p: res) {
    cout << p.first << ' ' << p.second << endl;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t --) solve();

  return 0;
}