#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFLL = 1e18;

void solve() {
  int n, b = INT_MAX;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    a = abs(a);
    if (a <= b)
      b = a;
  }
  cout << b << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
