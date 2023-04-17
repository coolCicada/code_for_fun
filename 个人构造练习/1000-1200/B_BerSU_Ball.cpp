#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int m; cin >> m;
  vector<int> a1(m); for (auto &i: a1) cin >> i;
  int n; cin >> n;
  vector<int> a2(n); for (auto &i: a2) cin >> i;

  sort(a1.begin(), a1.end());
  sort(a2.begin(), a2.end());

  int l = 0, r = 0;
  int cnt = 0;
  while (l < m && r < n) {
    if (abs(a1[l] - a2[r]) <= 1) {
      cnt ++;
      l ++, r ++;
    }
    else {
      if (a1[l] > a2[r]) r ++;
      else l ++;
    } 
  }

  cout << cnt << endl;

  return 0;
}