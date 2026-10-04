#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFLL = 1e18;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int ans = n, pos = n / 2;
  int left = 0, right = n - 1;
  while (pos--) {
    if (s[left] != s[right])
      ans -= 2;
    else
      break;
    left++;
    right--;
  }
  cout << ans << endl;
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
