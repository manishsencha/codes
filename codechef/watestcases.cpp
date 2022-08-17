#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<pair<int, char>> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i].first;
    }
    string s;
    cin >> s;
    for(int i = 0; i < n; ++i) {
        v[i].second = s[i];
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; ++i) {
        if(v[i].second == '0') {
            cout << v[i].first << endl;
            return;
        }
    }
}
int main(){
    ll t;
    cin >> t;
    for(ll testcase = 0; testcase < t; ++testcase){
        solve();
    }
    return 0;
}