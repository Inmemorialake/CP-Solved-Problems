#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, fx = 0, fy = 0, fz = 0, x, y, z;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> x >> y >> z;
        fx += x;
        fy += y;
        fz += z;
    }
    
    if(fx == 0 && fy == 0 && fz == 0){
        cout << "YES \n";
    } else {
        cout << "NO \n";
    }

    return 0;
}