#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int d, sumTime;
  cin >> d >> sumTime;
  vector<pair<int, int> > a(d);
  for (int i = 0; i < d; i ++) {
    cin >> a[i].first >> a[i].second;
  }

  int min = 0, max = 0;
  for (int i = 0; i < d; i ++) {
    min += a[i].first;
    max += a[i].second;
  }

  if (sumTime < min || sumTime > max) {
    cout << "NO" << endl;
    return 0;
  }

  cout << "YES" << endl;

  vector<int> res(d);
  for (int i = 0; i < d; i ++) {
    res[i] = a[i].first;
    sumTime -= a[i].first;
  }

  for (int i = 0; i < d && sumTime; i ++) {
    int add = sumTime < a[i].second - a[i].first ? sumTime : a[i].second - a[i].first;
    sumTime -= add;
    res[i] += add;
  }

  for (int i = 0; i < d; i ++) cout << res[i] << ' ';

  return 0;
}