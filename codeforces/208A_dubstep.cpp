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

void solve() {
    string str;
    cin >> str;
    int n = sz(str);
    string sub = "WUB", res = "";
    int i = 0;
    while(i < n) {
        string t = str.substr(i, 3);
        if(t == sub) {
            i += 3;
            if(res.length() > 0) {
                res += " ";
            }
        }
        else {
            res = res + str[i];
            i++;
        }
    }
    cout << res << endl;
}

int main()
{
    fastio;
    solve();
    return 0;
}