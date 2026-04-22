#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    s.front() = toupper(s.front());
    cout << s << "\n";

    return 0;
}