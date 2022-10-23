#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int((x).size()))

#define MOD 1000000007
#define ll long long

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int t1 = 0;
    if(c > b) {
        t1 = (c - b) + c - 1;
    }
    else {
        t1 = b - 1;
    }
    if(t1 == a - 1) cout << 3 << endl;
    else if(t1 > a -1) cout << 1 << endl;
    else cout  << 2 << endl;
}

int main()
{
    fastio;
    tc
    {
        solve();
    }
    return 0;
}