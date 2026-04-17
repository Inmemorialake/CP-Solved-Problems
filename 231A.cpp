#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, solvable = 0, isSolvable, p, v, t;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> p >> v >> t;
        isSolvable = p + v + t;
        if(isSolvable > 1){
            solvable++;
        }
    }

    cout << solvable << "\n";

    return 0;
}