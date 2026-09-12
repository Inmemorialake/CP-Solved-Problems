#include <bits/stdc++.h>

using namespace std;

bool is_vowel(char c) {
    if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
    return false;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;
    int vowels = 0, ys = 0;
    for(auto& c: s) {
        if(is_vowel(c)) vowels++;
        else if(c == 'y') ys++;
    }
    cout << vowels << " " << vowels + ys << '\n';

    return 0;
}