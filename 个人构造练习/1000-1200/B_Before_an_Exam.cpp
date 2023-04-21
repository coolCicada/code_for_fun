#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int d, sumTime;
  cin >> d >> sumTime;

  vector<pair<int, int> > a(d);
  for (auto &i: a) {
    cin >> i.first >> i.second;
  }

  int minSum = 0, maxSum = 0;
  for (int i = 0; i < d; i ++) {
    minSum += a[i].first;
    maxSum += a[i].second;
  }

  if (sumTime < minSum || sumTime > maxSum) {
    cout << "NO" << endl;
    return 0;
  }
  cout << "YES" << endl;
  sumTime -= minSum;
  vector<int> res(d);
  for (int i = 0; i < d; i ++) res[i] = a[i].first;

  for (int i = 0; i < d; i ++) {
    int re = a[i].second - a[i].first;
    int t = re <= sumTime ? re : sumTime;
    res[i] += t;
    sumTime -= t;
  }

  for (int i = 0; i < d; i ++) cout << res[i] << ' ';

  cout << endl;

  return 0;
}