#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

vector<string> stringSplit(const std::string& str, string delim) { int previous = 0, current = -1, L = delim.size(); vector<string> elems; while ((current = str.find(delim, previous)) != string::npos) { if (current > previous) { elems.push_back(str.substr(previous, current - previous)); } previous = current + L; } if (previous != str.size()) { elems.push_back(str.substr(previous)); } return elems; }

void solve() {
  vector<string> a(9);
  for (int i = 0; i < 9; i ++) cin >> a[i];
  for (int i = 0; i < 9; i ++) {
    for (int j = 0; j < 9; j ++) {
      if (a[i][j] == '1') a[i][j] = '2';
    }
  }
  for (int i = 0; i < 9; i ++) {
    cout << a[i] << endl;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while (t --) solve();

  return 0;
}