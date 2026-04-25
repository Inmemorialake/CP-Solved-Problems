#include <bits/stdc++.h>

using namespace std;

bool mainVerification(int sum, int times){
    return sum >= 0 && times == 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++){
        cin >> n;
        int ones[n], changes = 0, sum = 0, times = 1;

        for(int j = 0; j < n; j++){
            cin >> ones[j];
            sum += ones[j];
            times *= ones[j];
        }

        while (!mainVerification(sum, times)){
            if(times != 1){
                times *= -1;
                sum += 2;
                changes++;
            }
            while (sum < 0){
                sum += 4;
                changes += 2;
            }
        }

        cout << changes << "\n";
    }
    return 0;
}