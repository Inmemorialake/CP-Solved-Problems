#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int l, b, counter = 0;
    cin >> l >> b;

    while (b >= l){
        b *= 2;
        l *= 3;
        counter++;
    }
    
    cout << counter << "\n";
    
    return 0;
}