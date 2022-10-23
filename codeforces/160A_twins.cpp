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

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    sort(all(v));
    vector<int> sum(n);
    int s = 0;
    for (int i = 0; i < n; ++i)
    {
        s += v[i];
        sum[i] += s;
    }
    s = 0;
    int res = n;
    for (int i = n - 1; i >= 0; --i)
    {
        s += v[i];
        if (s > sum[i] - v[i])
        {
            res = n - i;
            break;
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