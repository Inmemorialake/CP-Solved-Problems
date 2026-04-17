#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    vector<int> n;
    int idx = 0;

    for (int i = 0; i < s.length(); i++){
        if(s[i] != '+'){
            n.push_back(s[i] - '0');
            idx++;
        }
    }

    sort(n.begin(), n.end());

    for (int i = 0; i < n.size(); i++){
        cout << n[i];
        if(i != n.size() - 1){
            cout << '+'; 
        }
    }
    

    return 0;
}