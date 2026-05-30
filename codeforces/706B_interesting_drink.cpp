#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for(int &i: p){
        cin >> i;
    }
    sort(p.begin(), p.end());

    int q;
    cin >> q;
    while(q--) {
        int m;
        cin >> m;
        int res = 0, l = 0, r = n - 1;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(p[mid] <= m) {
                res = mid + 1;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout << res << endl;
    }
    return 0;
}
