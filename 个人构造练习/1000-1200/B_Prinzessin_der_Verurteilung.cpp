#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  unordered_set<string> st;
  for (int i = 0; i < n; i ++) st.insert(string(1, s[i]));
  for (int i = 0; i < n - 1; i ++) st.insert(s.substr(i, 2));
  for (int i = 0; i < n - 2; i ++) st.insert(s.substr(i, 3));

  vector<string> v = { "" };
  for (int i = 0; i < 26; i ++) {
    int L = v.size();
    cout << L << endl;
    for (int j = 0; j < L; j ++) {
      // cout << "!" << endl;
      v.push_back(v[j] + char('a' + i));
    }
  }

  cout << "??" << endl;

  for (int i = 0; i < v.size(); i ++) {
    if (!st.count(v[i])) {
      cout << v[i] << endl;
      return;
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