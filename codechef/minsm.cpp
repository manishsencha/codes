#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll mn = INT_MAX;
    for(ll i = 0; i < n; ++i) {
        cin >> v[i];
        mn = min(mn, v[i]);
    }
    ll res = mn;
    for(ll i = 0; i < n; ++i) {
        res = min(res, __gcd(mn, v[i]));
    }
    cout << res * n << '\n';
}
int main(){
    ll t;
    cin >> t;
    for(ll testcase = 0; testcase < t; ++testcase){
        solve();
    }
    return 0;
}