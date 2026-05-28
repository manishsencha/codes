#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> count(5, 0);
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        count[a]++;
    }

    int ans = count[4] + (count[2] / 2);

    count[2] = count[2] % 2;

    if(count[1] > count[3]) {
        ans += count[3];
        count[1] -= count[3];
        count[3] = 0;
    } else {
        ans += count[1];
        count[3] -= count[1];
        count[1] = 0;
    }
    
    if(count[2] > 0) {
        ans++;
        count[1] = max(0, count[1] - 2);
        count[2] = 0;
    }

    ans += count[3] + (count[1] + 3) / 4;
    cout << ans;
   
    return 0;
}
// 1 2 3 3 4

