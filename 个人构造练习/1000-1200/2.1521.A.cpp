#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;

  while (t --) {
    int a, b;
    cin >> a >> b;

    if (b == 1) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
      cout << a << ' ' << (LL)a * b << ' ' << (LL)a * (b + 1) << endl;
    }
  }

  return 0;
}