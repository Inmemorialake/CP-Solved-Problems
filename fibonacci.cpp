#include <iostream> // Es mejor evitar <bits/stdc++.h> por portabilidad y tiempos

using namespace std;

unsigned long long fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;

    unsigned long long ant2 = 0; // F(n-2)
    unsigned long long ant1 = 1; // F(n-1)
    unsigned long long actual = 0;

    for (int i = 2; i <= n; ++i) {
        actual = ant1 + ant2;
        ant2 = ant1;
        ant1 = actual;
    }
    return actual;
}

int main() {
    int n;

    cout << "Ingrese el numero de fibonacci que quiere encontrar (Max 93): ";
    cin >> n;

    if (n > 93) {
        cout << "\n¡Cuidado! Valores mayores a 93 desbordaran el unsigned long long." << endl;
    }

    cout << "\nEl numero en la posicion " << n << " de fibonacci es: " << fibonacci(n) << endl;

    return 0;
}
