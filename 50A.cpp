#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    if(n % 2 == 0){
        cout << (n * m) / 2 << "\n";
    }
    else if(m % 2 == 0) {
        cout << ((n-1) * (m) / 2) + (m / 2) << "\n";
    }
    else {
        cout << (((n-1) * (m)) / 2) + ((m - 1) / 2) << "\n";
    }

    return 0;
}