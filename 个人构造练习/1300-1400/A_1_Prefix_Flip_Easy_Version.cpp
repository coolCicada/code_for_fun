#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

vector<string> stringSplit(const std::string& str, string delim) { int previous = 0, current = -1, L = delim.size(); vector<string> elems; while ((current = str.find(delim, previous)) != string::npos) { if (current > previous) { elems.push_back(str.substr(previous, current - previous)); } previous = current + L; } if (previous != str.size()) { elems.push_back(str.substr(previous)); } return elems; }

void solve() {
  int n; cin >> n;
  string a, b; cin >> a >> b;
  vector<int> res;
  for (int i = 0; i < n; i ++) {
    if (a[i] != b[i]) {
      if (i == 0) {
        res.push_back(1);
      } else {
        res.push_back(i + 1);
        res.push_back(1);
        res.push_back(i + 1);
      }
    }
  }
  cout << res.size() << ' ';
  for (int i = 0; i < res.size(); i ++) {
    cout << res[i] << ' ';
  }
  cout << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while (t --) solve();

  return 0;
}