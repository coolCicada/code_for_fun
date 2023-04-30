#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i ++) cin >> arr[i];

  sort(arr.begin(), arr.end());

  int l = (n - 1) >> 1, r = l + 1;

  for (; r < n; l --, r ++) {
    cout << arr[l] << ' ' << arr[r] << ' ';
  }

  if (n % 2 != 0) cout << arr[0];

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