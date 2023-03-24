#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

LL gcd(LL a, LL b) {
  return b ? gcd(b, a % b) : a;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  vector<LL> na(n), ma(m);
  for (int i = 0; i < n; i ++) cin >> na[i];
  for (int i = 0; i < m; i ++) cin >> ma[i];

  for (int j = 0; j < m; j ++) {
    LL pre = ma[j] + na[0];
    for (int i = 1; i < n; i ++) {
      pre = gcd(pre, ma[j] + na[i]);
    }
    cout << pre << ' ';
  }

  return 0;
}