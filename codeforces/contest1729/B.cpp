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
    int n;
    cin >> n;
    string s, res = "";
    cin >> s;
    int i = n - 1;
    while (i >= 0)
    {
        if (s[i] == '0')
        {
            string ts = s.substr(i - 2, 2);
            int t = stoi(ts);
            res = (char) ('a' + t - 1) + res;
            i -= 3;
            // cout << ts << '\n';
        }
        else
        {
            int t = s[i] - '0';
            res = (char)('a' + t - 1) + res;
            i--;
        }
    }
    cout << res << '\n';
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