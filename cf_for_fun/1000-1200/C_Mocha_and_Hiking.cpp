#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i ++) cin >> a[i];

  if (a[1]) {
    cout << n + 1 << ' ';
    for (int i = 1; i <= n; i ++) cout << i << ' ';
    return;
  }

  if (!a[n]) {
    for (int i = 1; i <= n; i ++) cout << i << ' ';
    cout << n + 1 << ' ';
    return;
  }

  for (int i = 1; i <= n; i ++) {
    cout << i << ' ';
    if (!a[i] && a[i + 1]) {
      cout << n + 1 << ' ';
      for (int j = i + 1; j <= n; j ++) cout << j << ' ';
      return;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t --) {
    solve();
    cout << endl;
  }

  return 0;
}