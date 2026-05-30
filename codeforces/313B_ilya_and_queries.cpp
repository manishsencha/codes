#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int m;
    cin >> m;
    vector<int> prefix(s.size(), 0);
    for(int i = 1; i < s.size(); i++) {
        prefix[i] = prefix[i - 1];
        if(s[i] == s[i - 1]) {
            prefix[i]++;
        }
    }
    while(m--) {
        int l, r;
        cin >> l >> r;
        int res = prefix[r - 1] - prefix[l - 1];
        cout << res << endl;
    }
    
    return 0;
}
