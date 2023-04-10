#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;

  while(t --) {
    LL a, b;
    cin >> a >> b;

    if (b == 1) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
      cout << a << ' ' << a * b << ' ' << a * (b + 1) << endl;
    }
  }

  return 0;
}