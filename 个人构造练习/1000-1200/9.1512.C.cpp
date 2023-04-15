#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
  int a, b;
  cin >> a >> b;
  string str;
  cin >> str;

  int length = str.size();
  for (int i = 0; i < length; i ++) {
    if (str[i] == '0') a --;
  }

  int l = 0, r = length - 1;
  while (l < r) {
    if (str[l] == '0' && str[r] == '1' || str[r] == '0' && str[l] == '1') {
      cout << -1 << endl;
      return;
    }
    if (str[l] == '0' && str[r] == '?' || str[r] == '0' && str[l] == '?') {
      a --;
      str[l] = str[r] = '0';
    }
    l ++, r --;
  }

  if (a % 2 == 1) {
    if (length % 2 == 0) {
      cout << -1 << endl;
      return;
    }
    if (str[length >> 1] != '?') {
      cout << -1 << endl;
      return;
    }
    str[length >> 1] = '0';
    a --;
  }

  l = 0, r = length - 1;
  while (l < r && a > 0) {
    if (str[l] == '?' && str[r] == '?') {
      a -= 2;
      str[l] = str[r] = '0';
    }
    l ++, r --;
  }

  if (a != 0) {
    cout << -1 << endl;
    return;
  }

  for (int i = 0; i < length; i ++) {
    if (str[i] == '?') str[i] = '1';
  }

  cout << str << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t --) solve();

  return 0;
}