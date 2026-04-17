#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, p = 0;
    cin >> n >> k;
    int c[n];

    for (int i = 0; i < n; i++){
        cin >> c[i];
    }
    for (int i = 0; i < n; i++){
        if(c[i] >= c[k-1] && c[i] > 0){
            p++;
        }
    }
    
    cout << p << "\n";

    return 0;
}