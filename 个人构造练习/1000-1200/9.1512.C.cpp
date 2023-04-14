#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
  int a, b;
  cin >> a >> b;
  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i ++) if (s[i] == '0') a --;

  int l = 0, r = s.size() - 1;
  int t1 = 0, t2 = 0;
  while (l <= r) {
    if (s[l] != '?' && s[r] != '?' && s[l] != s[r]) {
      cout << -1 << endl;
      return;
    }
    if (l == r && s[l] == '?' && s[r] == '?') t1 ++;
    else if (s[l] == '?' && s[r] == '?') t2 ++;
    else if (s[l] == '?' && s[r] == '0' || s[l] == '0' && s[r] == '?') {
      a --;
      s[l] = s[r] = '0';
    }
    l ++, r --;
  }

  if (a < 0) {
    cout << -1 << endl;
    return;
  }

  if (a % 2 == 1 && t1 == 0) {
    cout << -1 << endl;
    return;
  }

  if (a % 2 == 0 && t2 * 2 < a) {
    cout << -1 << endl;
    return;
  }

  if (a % 2 == 1) {
    s[(s.size() - 1) / 2] = '0';
    a --;
  }

  l = 0, r = s.size() - 1;
  while (l < r && a > 0) {
    if (s[l] == '?' && s[r] == '?') {
      a -= 2;
      s[l] = s[r] = '0';
    }
    l ++, r --;
  }

  if (a > 0) {
    cout << -1 << endl;
    return;
  }

  for (int i = 0; i < s.size(); i ++) {
    if (s[i] == '?') s[i] = '1';
  }

  cout << s << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t --) solve();

  return 0;
}