#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, k;
    cin >> s >> k;

    reverse(s.begin(), s.end());

    if (s == k) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}