#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

vector<string> stringSplit(const std::string& str, string delim) { int previous = 0, current = -1, L = delim.size(); vector<string> elems; while ((current = str.find(delim, previous)) != string::npos) { if (current > previous) { elems.push_back(str.substr(previous, current - previous)); } previous = current + L; } if (previous != str.size()) { elems.push_back(str.substr(previous)); } return elems; }

void solve() {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (auto &i: a) cin >> i;
  for (auto &i: b) cin >> i;

  int j = n - 1;
  for (int i = n - 1; i >= 0; i --) {
    if (a[i] == b[j]) j --;
  }

  cout << n - (n - 1 - j) << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while (t --) solve();

  return 0;
}