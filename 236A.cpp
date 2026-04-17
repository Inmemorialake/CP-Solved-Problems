#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    bool seen[26] = {false};
    int char_count = 0;

    for (int i = 0; i < (int)s.length(); i++) {
        int idx = s[i] - 'a';
        if (!seen[idx]) {
            seen[idx] = true;
            char_count++;
        }
    }

    if (char_count % 2 == 0) {
        cout << "CHAT WITH HER!\n";
    } else {
        cout << "IGNORE HIM!\n";
    }

    return 0;
}