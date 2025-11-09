#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int res = 0;
        while (n > 2)
        {
            int d = n / 3;
            res += d;
            n = n - (2 * d);
        }
        cout << res << endl;
    }
    return 0;
}