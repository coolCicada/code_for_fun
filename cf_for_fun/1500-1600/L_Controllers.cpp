#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

vector<string> stringSplit(const std::string& str, string delim) { int previous = 0, current = -1, L = delim.size(); vector<string> elems; while ((current = str.find(delim, previous)) != string::npos) { if (current > previous) { elems.push_back(str.substr(previous, current - previous)); } previous = current + L; } if (previous != str.size()) { elems.push_back(str.substr(previous)); } return elems; }

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n; cin >> n;
  string s; cin >> s;
  int m; cin >> m;

  int s1 = 0, s2 = 0;
  for (auto &i: s) {
    if (i == '+') s1 ++;
    else s2 ++;
  }

  while (m --) {
    int x, y; cin >> x >> y;
    if (y - x == 0) {
      if (s1 - s2 == 0) cout << "YES" << endl;
      else cout << "NO" << endl;
      continue;
    }
    if (1LL * (s1 - s2) * y % (y - x) != 0) {
      cout << "NO" << endl;
      continue;
    }
    LL target = 1LL * (s1 - s2) * y / (y - x);
    if (-s2 <= target && s1 >= target) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}