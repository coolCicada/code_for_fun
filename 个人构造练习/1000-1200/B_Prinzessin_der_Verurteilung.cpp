#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  unordered_set<string> st;
  string tmp = "";
  for (int i = 0; i < n; i ++) st.insert(tmp + s[i]);
  for (int i = 0; i < n - 1; i ++) st.insert(s.substr(i, 2));
  for (int i = 0; i < n - 2; i ++) st.insert(s.substr(i, 3));

  vector<string> v = {""};

  for (int i = 0; i < v.size(); i ++) {
    for (int j = 0; j < 26; j ++) {
      string curr = v[i] + char('a' + j);
      if (!st.count(curr)) {
        cout << curr << endl;
        return;
      }
      v.push_back(curr);
    }
  }

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t --) solve();

  return 0;
}