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
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (int i = 0; i < m; ++i)
        cin >> v[i];
    sort(all(v));
    int res = INT_MAX;
    for (int i = 0; i <= m - n; i++)
    {
        res = min(res, v[i + n - 1] - v[i]);
    }
    cout << res << '\n';
}

int main()
{
    fastio;
    solve();
    return 0;
}