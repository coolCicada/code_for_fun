#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

vector<string> stringSplit(const std::string& str, string delim) { int previous = 0, current = -1, L = delim.size(); vector<string> elems; while ((current = str.find(delim, previous)) != string::npos) { if (current > previous) { elems.push_back(str.substr(previous, current - previous)); } previous = current + L; } if (previous != str.size()) { elems.push_back(str.substr(previous)); } return elems; }

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n; cin >> n;
  vector<string> oldList(n), newList(n);
  for (auto &i: oldList) cin >> i;
  for (auto &i: newList) cin >> i;

  unordered_map<string, int> mp;
  for (auto &i: oldList) mp[i] ++;

  int cnt = 0;
  for (auto &i: newList) {
    if (mp[i]) {
      cnt ++;
      mp[i] --;
    }
  }

  cout << n - cnt << endl;

  return 0;
}