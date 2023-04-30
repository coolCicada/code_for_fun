#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

vector<string> stringSplit(const std::string& str, string delim) { int previous = 0, current = -1, L = delim.size(); vector<string> elems; while ((current = str.find(delim, previous)) != string::npos) { if (current > previous) { elems.push_back(str.substr(previous, current - previous)); } previous = current + L; } if (previous != str.size()) { elems.push_back(str.substr(previous)); } return elems; }

void solve() {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (auto &i: a) cin >> i;
  for (auto &i: b) cin >> i;

  vector<int> aSuf(n), bPre(n);

  aSuf[n - 1] = a[n - 1];
  for (int i = n - 2; i >= 0; i --) {
    aSuf[i] = aSuf[i + 1] + a[i];
  }

  bPre[0] = b[0];
  for (int i = 1; i < n; i ++) {
    bPre[i] = bPre[i - 1] + b[i];
  }

  int r = 1e9;
  for (int i = 0; i < n; i ++) {
    int t1 = i == n - 1 ? 0 : aSuf[i + 1];
    int t2 = i == 0 ? 0 : bPre[i - 1];
    int t = max(t1, t2);
    r = min(t, r);
  }

  cout << r << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while (t --) solve();

  return 0;
}