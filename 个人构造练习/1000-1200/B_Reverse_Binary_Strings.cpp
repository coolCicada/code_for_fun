#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  int cnt0 = 0, cnt1 = 0;

  for (int i = 1; i < s.size(); i ++) {
    if (s[i] == '0' && s[i - 1] == '0') {
      cnt0 ++;
    } else if (s[i] == '1' && s[i - 1] == '1') {
      cnt1 ++;
    } 
  }

  cout << max(cnt0, cnt1) << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t --) solve();

  return 0;
}