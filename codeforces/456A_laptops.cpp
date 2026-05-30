#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    for(auto &i : v) cin >> i.first >> i.second;
    
    sort(v.begin(), v.end());

    if(n == 1){
        cout << "Poor Alex" << endl;
        return 0;
    }

    for(int i = 1; i < n; ++i) {
        if(v[i].second < v[i - 1].second) {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }

    cout << "Poor Alex" << endl;

    return 0;
}

