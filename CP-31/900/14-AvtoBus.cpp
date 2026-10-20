#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFLL = 1e18;

void solve() {
  ll n;
  cin >> n;

  if (n % 2 == 1 || n < 4) {
    cout << -1 << endl;
    return;
  }

  // if (n > 4 && n % 6 == 0)
  //   cout << n / 6 + 1 << " ";
  // else if (n > 4 && n % 6 == 4 || n % 6 == 2)
  //   cout << n / 6 + 1 << " ";
  // else
  //   cout << n / 4 << " ";
  // cout << n / 4 << endl;

  ll mx = n / 4;
  ll mn = ceil(n * 1.0 / 6);
  cout << mn << " " << mx << endl;
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
