#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

vector<string> stringSplit(const std::string& str, string delim) { int previous = 0, current = -1, L = delim.size(); vector<string> elems; while ((current = str.find(delim, previous)) != string::npos) { if (current > previous) { elems.push_back(str.substr(previous, current - previous)); } previous = current + L; } if (previous != str.size()) { elems.push_back(str.substr(previous)); } return elems; }

void solve() {
  int n; cin >> n;
  vector<vector<int> > a(2, vector<int>(n));
  for (int i = 0; i < n; i ++) cin >> a[0][i];
  for (int i = 0; i < n; i ++) cin >> a[1][i];

  vector<int> one(n);
  one[n - 1] = a[0][n - 1];
  for (int i = n - 2; i >= 0; i --) {
    one[i] = one[i + 1] + a[0][i];
  }

  vector<int> two(n);
  two[0] = a[1][0];
  for (int i = 1; i < n; i ++) {
    two[i] = two[i - 1] + a[1][i];
  }

  int mn = 1e9; 
  for (int i = 0; i < n; i ++) {
    int r = i + 1 >= n ? 0 : one[i + 1];
    int l = i - 1 >= 0 ? two[i - 1] : 0;

    mn = min(max(r, l), mn);
  }

  cout << mn << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while (t --) solve();

  return 0;
}