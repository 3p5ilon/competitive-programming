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
  int three = 0, two = 0;
  while (n % 2 == 0) {
    n /= 2;
    two++;
  }

  while (n % 3 == 0) {
    n /= 3;
    three++;
  }

  if (n != 1 || two > three)
    cout << -1 << endl;
  else
    cout << (three - two) + three << endl;
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
