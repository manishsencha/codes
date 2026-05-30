#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int &i: v) cin >> i;

    long sum = 0;

    for(int i = 0; i < k; ++i) sum += v[i];

     long l = 0, r = k, res = 0, min_sum = sum;

    for(int l = 0, r = k; r < n; ++l, ++r) {
        int s = sum - v[l] + v[r];
        if(s < min_sum) {
            res = l + 1;
            min_sum = s;
        }
        sum = s;
    }
    
    cout << res + 1 << endl;
    return 0;
}
