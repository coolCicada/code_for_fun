#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

#define INF (long long)2e+18

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  LL n, m;
  cin >> n >> m;

  LL r = INF;

  for (int i = 1; i <= n; i ++) {
    LL x = (m + i - 1) / i;
    if (x <= n && x * i >= m) {
      r = min(r, x * i);
    }

    if (i >= x) break;
  }

  if (r == INF) cout << -1 << endl;
  else cout << r << endl;

  return 0;
}