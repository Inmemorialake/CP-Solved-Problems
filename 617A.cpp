#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, steps = 0;
    cin >> x;

    for(int i = 5; i > 0 ; i--){
        steps += x / i;
        x = x % i;
    }

    cout << steps << "\n";

    return 0;
}