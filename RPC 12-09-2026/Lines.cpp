#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, lph;
    cin >> n >> lph;

    vector<int> loc(n);

    for(int i = 0; i < n; i++){
        cin >> loc[i];
    }

    sort(loc.begin(), loc.end());

    int problemas = 0, lm = lph * 5;
    
    for (int i = 0; i < n; i++){
        if(lm >= loc[i]){
            problemas++;
            lm -= loc[i];
        }
    }
    
    cout << problemas << "\n";
    
    return 0;
}