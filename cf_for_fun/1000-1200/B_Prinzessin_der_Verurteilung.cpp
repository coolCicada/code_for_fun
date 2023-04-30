#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  vector<string> a = {""};
  for (int i = 0; i < a.size(); i ++) {
    for (int j = 0; j < 26; j ++) {
      string t;
      t = a[i] + char('a' + j);
      if (s.find(t) == -1) {
        cout << t << endl;
        return;
      }
      a.push_back(t);
    }
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