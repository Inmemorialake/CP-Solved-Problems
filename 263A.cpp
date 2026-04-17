#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int place, movements = 0;
    pair<int, int> position;

    for(int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> place;
            if (place == 1){
                position.first = i; 
                position.second = j;
            }
        }
    }

    while (position.first > 2){
        position.first--;
        movements++;
    }
    while (position.first < 2){
        position.first++;
        movements++;
    }
    while (position.second > 2){
        position.second--;
        movements++;
    }
    while (position.second < 2){
        position.second++;
        movements++;
    }

    cout << movements << "\n";

    return 0;
}