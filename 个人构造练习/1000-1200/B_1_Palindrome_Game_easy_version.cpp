#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

vector<string> stringSplit(const std::string& str, string delim) { int previous = 0, current = -1, L = delim.size(); vector<string> elems; while ((current = str.find(delim, previous)) != string::npos) { if (current > previous) { elems.push_back(str.substr(previous, current - previous)); } previous = current + L; } if (previous != str.size()) { elems.push_back(str.substr(previous)); } return elems; }

void solve() {
  int n; cin >> n;
  string s; cin >> s;

  int cnt = 0;
  for (auto &i: s) {
    if (i == '0') cnt ++;
  }

  if (cnt % 2 == 0) cout << "BOB" << endl;
  else {
    if (cnt > 1) cout << "ALICE" << endl;
    else cout << "BOB" << endl;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while (t --) solve();

  return 0;
}