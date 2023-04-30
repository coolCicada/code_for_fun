#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

vector<string> stringSplit(const std::string& str, string delim) { int previous = 0, current = -1, L = delim.size(); vector<string> elems; while ((current = str.find(delim, previous)) != string::npos) { if (current > previous) { elems.push_back(str.substr(previous, current - previous)); } previous = current + L; } if (previous != str.size()) { elems.push_back(str.substr(previous)); } return elems; }

void solve() {
  int n; cin >> n;
  vector<int> a(n); for (auto &i: a) cin >> i;
  vector<int> b(n); for (auto &i: b) cin >> i;

  int total = 0;
  for (auto &i: b) total += i;
  
  if (total > 0 && total < n) {
    cout << "Yes" << endl;
    return;
  } else {
    bool flag = true;
    for (int i = 1; i < n; i ++) {
      if (a[i] < a[i - 1]) {
        flag = false;
        break;
      }
    }
    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while (t --) solve();

  return 0;
}