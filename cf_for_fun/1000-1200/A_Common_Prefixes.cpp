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

  string s = string(mv + 1, 'a');
  cout << s << endl;
  for (int i = 0; i < n; i ++) {
    s[a[i]] = s[a[i]] == 'a' ? 'b' : 'a'; 
    cout << s << endl;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while(t --) solve();

  return 0;
}