#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFLL = 1e18;

void solve() {
  int points = 0;
  for (int i = 0; i < 10; i++) {
    string s;
    cin >> s;
    for (int j = 0; j < 10; j++) {
      if (s[j] == 'X') {
        int h = min(j + 1, 9 - j + 1);
        int v = min(i + 1, 9 - i + 1);
        points += min(h, v);
      }
    }
  }
  cout << points << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
