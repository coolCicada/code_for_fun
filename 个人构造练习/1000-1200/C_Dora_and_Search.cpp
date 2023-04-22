#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

vector<string> stringSplit(const std::string& str, string delim) { int previous = 0, current = -1, L = delim.size(); vector<string> elems; while ((current = str.find(delim, previous)) != string::npos) { if (current > previous) { elems.push_back(str.substr(previous, current - previous)); } previous = current + L; } if (previous != str.size()) { elems.push_back(str.substr(previous)); } return elems; }

void solve() {
  int m; cin >> m;
  vector<int> a(m + 1);
  priority_queue<int, vector<int>, greater<int> > pq1;
  priority_queue<int, vector<int>, less<int> > pq2;
  for (int i = 1; i <= m; i ++) {
    cin >> a[i];
    pq1.push(a[i]);
    pq2.push(a[i]);
  }
  int l = 1, r = m;
  while (l < r) {
    int minV = pq1.top();
    int maxV = pq2.top();
    bool flag = true;
    if (a[l] == minV) {
      l ++;
      pq1.pop();
      flag = false;
    }
    if (a[l] == maxV) {
      l ++;
      pq2.pop();
      flag = false;
    }
    if (a[r] == minV) {
      r --;
      pq1.pop();
      flag = false;
    }
    if (a[r] == maxV) {
      r --;
      pq2.pop();
      flag = false;
    }
    if (flag) break;
  }
  if (l < r) cout << l << ' ' << r;
  else cout << -1;
  cout << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t --) solve();

  return 0;
}