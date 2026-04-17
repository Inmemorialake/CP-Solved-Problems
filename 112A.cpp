#include <bits/stdc++.h>

using namespace std;

string tolowerise(string s){
    for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;

    if(tolowerise(a) == tolowerise(b)){
        cout << "0\n";
    } else if(tolowerise(a) < tolowerise(b)){
        cout << "-1\n";
    } else {
        cout << "1\n";
    }

    return 0;
}