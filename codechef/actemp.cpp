#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a <= b && c <= b) cout << "Yes\n";
    else cout << "No\n";
}
int main(){
    ll t;
    cin >> t;
    for(ll testcase = 0; testcase < t; ++testcase){
        solve();
    }
    return 0;
}