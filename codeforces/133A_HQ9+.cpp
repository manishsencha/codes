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
    string s;
    cin >> s;
    int n = sz(s);
    for(int i = 0; i < n; ++i) {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
            cout <<"YES\n";
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