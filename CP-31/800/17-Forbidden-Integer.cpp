#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFLL = 1e18;

void solve() {
  int n, k, x;
  cin >> n >> k >> x;

  if (k == 1) {
    cout << "NO" << endl;
    return;
  }

  if (x != 1) {
    cout << "YES" << endl << n << endl;
    for (int i = 0; i < n; i++)
      cout << 1 << " ";
    cout << endl;
    return;
  }

  if (n % 2 == 0) {
    cout << "YES" << endl << n / 2 << endl;
    for (int i = 0; i < n / 2; i++)
      cout << 2 << " ";
    cout << endl;
    return;
  }

  if (k >= 3) {
    cout << "YES" << endl << n / 2 << endl;
    cout << 3 << " ";
    for (int i = 0; i < n / 2 - 1; i++)
      cout << 2 << " ";
    cout << endl;
    return;
  }
  cout << "NO" << endl;
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
