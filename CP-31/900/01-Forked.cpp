#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFLL = 1e18;

void solve() {
  int a, b, x1, y1, x2, y2;
  cin >> a >> b >> x1 >> y1 >> x2 >> y2;

  int dx[4] = {1, 1, -1, -1};
  int dy[4] = {-1, 1, 1, -1};

  set<pair<int, int>> k, q;
  for (int i = 0; i < 4; i++) {
    k.insert({x1 + dx[i] * a, y1 + dy[i] * b});
    k.insert({x1 + dx[i] * b, y1 + dy[i] * a});

    q.insert({x2 + dx[i] * a, y2 + dy[i] * b});
    q.insert({x2 + dx[i] * b, y2 + dy[i] * a});
  }

  int cnt = 0;
  for (auto it : k)
    if (q.find(it) != q.end())
      cnt++;
  cout << cnt << endl;
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
