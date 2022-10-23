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
    string str;
    cin >> str;
    int n = sz(str);
    int c = 1;
    for (int i = 1; i < n; ++i)
    {
        if (str[i] == str[i - 1])
            c++;
        else
        {
            c = 1;
        }
        if (c >= 7)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
    return;
}

int main()
{
    fastio;
    solve();
    return 0;
}