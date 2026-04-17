#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x = 0;
    string input;
    cin >> n ;
    
    for(int i = 0; i < n; i++){
        cin >> input;
        if(input.find("+") != string::npos){
            x++;
        }
        else if (input.find("-") != string::npos){
            x--;
        } else {
            // do nothing
        }
    }

    cout << x << "\n";

    return 0;
}