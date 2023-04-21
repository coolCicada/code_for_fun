#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  LL cnt = n;
  for (int i = 1; i < n; i ++) {
    if (s[i - 1] != s[i]) cnt += i; 
  }

  cout << cnt << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t --) solve();

  return 0;
}