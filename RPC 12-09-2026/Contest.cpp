#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, c;
    cin >> n >> k >> c;

    vector<pair<int,int>> teams(n);
    for (int i = 0; i < n; i++) {
        cin >> teams[i].first >> teams[i].second;
    }

    vector<int> schoolCount(n + 1, 0);
    vector<bool> selected(n, false);
    vector<int> restantes;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        int school = teams[i].second;
        if (schoolCount[school] < c) {
            selected[i] = true;
            schoolCount[school]++;
            cnt++;
        } else {
            restantes.push_back(i);
        }
    }

    if (cnt < k) {
        int faltan = k - cnt;
        for (int idx = 0; idx < (int)restantes.size() && faltan > 0; idx++) {
            selected[restantes[idx]] = true;
            faltan--;
        }
    }

    int printed = 0;
    for (int i = 0; i < n && printed < k; i++) {
        if (selected[i]) {
            cout << teams[i].first << "\n";
            printed++;
        }
    }

    return 0;
}