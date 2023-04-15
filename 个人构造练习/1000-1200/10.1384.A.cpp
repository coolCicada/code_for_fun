#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  int mv = 0;
  for (auto &i: a) {
    cin >> i;
    mv = max(mv, i);
  }

  string s = "";
  for (int i = 0; i <= mv; i ++) {
    s += 'a';
  }
  cout << s << endl;
  for (int i = 0; i < n; i ++) {
    string curr = "";
    curr += s.substr(0, a[i]);
    curr += 'a' + (s[a[i]] + 1 - 'a') % 26 ;
    curr += s.substr(a[i] + 1);
    cout << curr << endl;
    s = curr;
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