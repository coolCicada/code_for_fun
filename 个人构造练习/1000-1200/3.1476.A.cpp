#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;

  while (t --) {
    LL n, k;
    cin >> n >> k;

    int d = (n + k - 1) / k;
    k *= d;

    cout << (k + n - 1) / n << endl;
  }

  return 0;
}