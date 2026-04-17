#include <bits/stdc++.h>

# define M_PI 3.14159265358979323846	

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, x;
    cin >> t >> x;

    double angle = t * (M_PI / 180.0);

    vector<pair<int, int>> flatEarthers(x);
    for (int i = 0; i < x; i++)
        cin >> flatEarthers[i].first >> flatEarthers[i].second;

    sort(flatEarthers.begin(), flatEarthers.end());

    double shadow = 0, rightmost = 0, pos, shadowEnd;

    for (int i = 0; i < x; i++) {
        pos = flatEarthers[i].first;
        shadowEnd = pos + flatEarthers[i].second / tan(angle);

        double start = max(pos, rightmost);
        if (shadowEnd > start) {
            shadow += shadowEnd - start;
            rightmost = shadowEnd;
        }
    }

    cout << fixed << setprecision(13) << shadow << "\n";

    return 0;
}