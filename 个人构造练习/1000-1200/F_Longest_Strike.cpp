#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

vector<string> stringSplit(const std::string& str, string delim) { int previous = 0, current = -1, L = delim.size(); vector<string> elems; while ((current = str.find(delim, previous)) != string::npos) { if (current > previous) { elems.push_back(str.substr(previous, current - previous)); } previous = current + L; } if (previous != str.size()) { elems.push_back(str.substr(previous)); } return elems; }

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  map<int, int> mp;
  for (auto &i: a) {
    cin >> i;
    mp[i] ++;
  }

  // for (auto &i: a) mp[i] ++;

  vector<int> single;
  for (auto it: mp) {
    if (it.second >= k) single.push_back(it.first);
  }
  sort(single.begin(), single.end());
  if (single.size() == 0) {
    cout << -1 << endl;
    return; 
  }

  int l = single[0], r = single[0], cnt = 0;
  for (int i = 1, j = 0; i < single.size(); i ++) {
    if (single[i] - single[i - 1] == 1) {
      if (single[i] - single[j] > cnt) {
        cnt = single[i] - single[j];
        l = single[j], r = single[i];
      }
    } else {
      j = i;
    }
  }

  cout << l << ' ' << r << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while (t --) solve();

  return 0;
}