#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

constexpr int INF = 1e9;
constexpr ll LINF = 4e18;

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define FORI(i, a, b) for (ll i = a; i >= b; i--)
#define FORA(i, v) for (auto &i : v)
#define all(v) v.begin(), v.end()

template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) {
  return os << '(' << p.first << ", " << p.second << ')';
}

template <typename T> ostream &operator<<(ostream &os, const vector<T> &v) {
  os << '[';
  for (size_t i = 0; i < v.size(); i++) {
    if (i)
      os << ", ";
    os << v[i];
  }
  return os << ']';
}

template <typename T> ostream &operator<<(ostream &os, const set<T> &s) {
  os << '{';
  bool first = true;
  for (const auto &x : s) {
    if (!first)
      os << ", ";
    first = false;
    os << x;
  }
  return os << '}';
}

template <typename T>
ostream &operator<<(ostream &os, const unordered_set<T> &s) {
  os << '{';
  bool first = true;
  for (const auto &x : s) {
    if (!first)
      os << ", ";
    first = false;
    os << x;
  }
  return os << '}';
}

template <typename K, typename V>
ostream &operator<<(ostream &os, const map<K, V> &m) {
  os << '{';
  bool first = true;
  for (const auto &[k, v] : m) {
    if (!first)
      os << ", ";
    first = false;
    os << k << ": " << v;
  }
  return os << '}';
}

template <typename K, typename V>
ostream &operator<<(ostream &os, const unordered_map<K, V> &m) {
  os << '{';
  bool first = true;
  for (const auto &[k, v] : m) {
    if (!first)
      os << ", ";
    first = false;
    os << k << ": " << v;
  }
  return os << '}';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, a, b;
  cin >> n >> a >> b;

  bool less = false, greater = false;

  FOR(i, 0, n - 1) {
    int val;
    cin >> val;
    if (val == a)
      less = true;
    else if (val == b)
      greater = true;
  }

  if (less && greater) {
    FOR(i, 1, n + 1) { cout << i << " "; }
    cout << '\n';
    return 0;
  }

  if (!less && !greater) {
    cout << "-1\n";
    return 0;
  }
  if (!less) {
    cout << a << "\n";
  } else if (!greater) {
    cout << b << '\n';
  }
}