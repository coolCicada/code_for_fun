#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

vector<string> stringSplit(const std::string& str, string delim) { int previous = 0, current = -1, L = delim.size(); vector<string> elems; while ((current = str.find(delim, previous)) != string::npos) { if (current > previous) { elems.push_back(str.substr(previous, current - previous)); } previous = current + L; } if (previous != str.size()) { elems.push_back(str.substr(previous)); } return elems; }

void solve() {
  int n; cin >> n;
  vector<int> a(n + 1); for (int i = 1; i <= n; i ++) cin >> a[i];
  int l = 1, r = n;
  int mn = 1, mx = n;
  while (l < r) {
    if (a[l] == mn) mn ++, l ++;
    if (a[l] == mx) mx --, l ++;
    if (a[r] == mn) mn ++, r --;
    if (a[r] == mx) mx --, r --;

    if (a[l] != mn && a[l] != mx && a[r] != mn && a[r] != mx) {
      cout << l << ' ' << r << endl;
      return;
    }
  }
  cout << -1 << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while (t --) solve();

  return 0;
}