#include <bits/stdc++.h>
#define vi vector<int>
#define vll vector<long long>

using ll = long long;

using namespace std;

vll nums;

bool is_prime(ll n) {
    if(n % 2 == 0) return false;
    for(int i = 3; i*i <= n; i++) {
        if(n%i == 0) return false;
    }

    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, k, p; cin >> n >> k >> p;
    bool prime =  is_prime(n);
    if(prime) {
        cout << 1 << "\n" << n << "\n";
        return 0;
    }
    
    for(ll i = p; i >= 1; i--) {
        if(n % i == 0) {
            if(n/i <= k)
                nums.push_back(n/i);
            else 
                break;
        }
    }

    cout << nums.size() << "\n";
    for(ll &n : nums)
        cout << n << "\n";

    return 0;
}