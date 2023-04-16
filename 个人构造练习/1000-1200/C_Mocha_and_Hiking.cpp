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
    for (int i = 1; i <= n + 1; i ++) cout << i << ' ';
    return;
  }

  for (int i = 1; i <= n; i ++) {
    if (!a[i] && a[i + 1]) {
      for (int j = 1; j <= i; j ++) {
        cout << j << ' ';
      }
      cout << n + 1 << ' ';
      for (int j = i + 1; j <= n; j ++) {
        cout << j << ' ';
      }
      return;
    }
  }

  cout << endl;
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