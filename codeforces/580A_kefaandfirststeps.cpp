#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int((x).size()))

#define MOD 1000000007

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i) cin >> v[i];
    int c = 1, res = 1;
    for(int i = 1; i < n; ++i) {
        if(v[i - 1] <= v[i]) {
            c++;
            res = max(c, res);
        }
        else {
            c = 1;
        }
    }
    cout << res << '\n';
}

int main()
{
    fastio;
    solve();
    return 0;
}