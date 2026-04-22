#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k, n, w, price = 0;
    cin >> k >> n >> w;

    price = ((w * (w + 1)) / 2) * k;

    cout << max(0, price - n) << "\n";

    return 0;
}