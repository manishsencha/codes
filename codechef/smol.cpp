#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        if(k == 0) {
            cout <<n <<"\n";
        }
        else 
        cout << n % k << '\n';
    }
    return 0;
}
