#include <bits/stdc++.h>
using namespace std;

bool can_finish(long long h, long long n, long long x, long long y, long long z) {
    long long opt1 = h * (x + y);
    
    long long opt2;
    if (h <= z) {
        opt2 = h * x;
    } else {
        opt2 = h * x + (h - z) * 10 * y;
    }
    
    return max(opt1, opt2) >= n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long n, x, y, z;
        cin >> n >> x >> y >> z;
        
        long long lo = 1, hi = n, ans = n;
        
        while (lo <= hi) {
            long long mid = lo + (hi - lo) / 2;
            if (can_finish(mid, n, x, y, z)) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}