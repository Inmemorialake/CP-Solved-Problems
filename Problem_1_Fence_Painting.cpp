#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(d <= b && c >= a){
        cout << b - a << "\n";
    }
    else if (d >= b && c <= a){
        cout << d - c << "\n";
    }
    else if (c <= b && d >= b){
        cout << d - a << "\n";
    }
    else if (d >= a && d <= b ){
        cout << b - c << "\n";
    }
    else{
        cout << (b - a) + (d - c) << "\n";
    }
    
    return 0;
}