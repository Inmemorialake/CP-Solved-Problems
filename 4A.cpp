#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int w;
    cin >> w;

    // Se puede dividir en dos partes pares solo si w es par y mayor que 2.
    cout << ((w > 2 && w % 2 == 0) ? "YES\n" : "NO\n");
    
    return 0;
}