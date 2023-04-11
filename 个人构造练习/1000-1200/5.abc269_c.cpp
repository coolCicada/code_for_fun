#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  LL x;
  cin >> x;

  vector<LL> res = { 0 };

  for (int i = 0; i < 60; i ++) {
    LL t = 1LL << i & x;
    
    if (t) {
      int size = res.size();
      for (int j = 0; j < size; j ++) {
        res.push_back(t | res[j]);
      }
    }
  }

  for (int i = 0; i < res.size(); i ++) {
    cout << res[i] << endl;
  }

  return 0;
}