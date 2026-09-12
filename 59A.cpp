#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int uppercase = 0;
    int lowercase = 0;

    for (int i = 0; i < s.length(); i++){
        if(isupper(s[i])){
            uppercase++;
        } else {
            lowercase++;
        }
    }
    
    if(uppercase > lowercase){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s << "\n";
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << "\n";
    }

    return 0;
}