#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int((x).size()))
#define ll long long

#define MOD 1000000007

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

void solve() {
    ll n, k;
    cin >> n >> k;
    ll e = n >> 1;
    ll o = n - e;
    if(k <= o) {
        cout << (2 * k - 1) << '\n';
    }
    else {
        k -= o;
        cout << 2 * k << '\n';
    }
}

int main()
{
    fastio;
    solve();
    return 0;
}