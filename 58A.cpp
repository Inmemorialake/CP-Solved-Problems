#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, message = "hello";
    cin >> s;

    int idx = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == message[idx]){
            idx++;
        }
    }

    if(idx == 5){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

    return 0;
}