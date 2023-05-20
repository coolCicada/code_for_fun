#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

vector<string> stringSplit(const std::string& str, string delim) { int previous = 0, current = -1, L = delim.size(); vector<string> elems; while ((current = str.find(delim, previous)) != string::npos) { if (current > previous) { elems.push_back(str.substr(previous, current - previous)); } previous = current + L; } if (previous != str.size()) { elems.push_back(str.substr(previous)); } return elems; }

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m, k;
  cin >> n >> m >> k;

  vector<int> a(m + 2);
  for (int i = 1; i <= m + 1; i ++) {
    cin >> a[i];
  }

  int t = a[m + 1];
  int cnt = 0;
  for (int i = 1; i <= m; i ++) {
    if (bitset<32>(a[i] ^ t).count() <= k) cnt ++;
  }

  cout << cnt << endl;

  return 0;
}