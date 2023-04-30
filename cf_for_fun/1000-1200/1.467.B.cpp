#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
// 1    0001
// 2    0010
// 3    0011
// 4    0100
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m, k;
  cin >> n >> m >> k;

  vector<LL> players;
  for (int i = 1; i <= m + 1; i ++) {
    LL t;
    cin >> t;
    players.push_back(t);
  }

  int cnt = 0;

  
  for (int i = 0; i < m; i ++) {
    int t = 0;
    LL fed = players[m];
    LL pl = players[i];
    while (fed || pl) {
      if ((fed & 1) != (pl & 1)) t ++;
      fed >>= 1;
      pl >>= 1;
    }
    // cout << i << '-' << t << endl;
    if (t <= k) cnt ++;
  }

  cout << cnt << endl;

  return 0;
}