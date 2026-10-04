#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFLL = 1e18;

void solve() {
  int n, k;
  cin >> n >> k;
  int arr[n];
  bool exist = false;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (arr[i] == k)
      exist = true;
  }

  if (exist)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
