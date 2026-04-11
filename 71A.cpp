#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string w;
    cin >> n;

    while (n--){
        cin >> w;
        if(w.length() <= 10){
            cout << w << "\n";
        } else {
            cout << w.front() << w.length() - 2 << w.back() << "\n";
        }
    }
    
    return 0;
}