#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, t;
    cin >> n >> k >> t;
    double result = n * t / 100.0, full;

    full = floor(result);

    for (int i = 0; i < full; i++){
        cout << k << " ";
    }

    double res = result - 1.0 * full;
    cout << floor(res * k) << " ";
    
    for (int i = 1; i < n - full; i++){
        cout << "0 ";
    }
    
    return 0;
}