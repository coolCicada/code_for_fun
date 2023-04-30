#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;

  while (t --) {
    int n, k;
    cin >> n >> k;

    int re = n - k;
    if (re >= 0 && re % 2 == 0) {
      cout << "YES" << endl;
      for (int i = 0; i < k - 1; i ++) cout << "1 ";
      cout << 1 + re << endl;
      continue;
    }

    int re2 = n - 2 * k;
    if (re2 >= 0 && re2 % 2 == 0) {
      cout << "YES" << endl;
      for (int i = 0; i < k - 1; i ++) cout << "2 ";
      cout << 2 + re2 << endl;
      continue;
    }
    
    cout << "NO" << endl;
  }

  return 0;
}