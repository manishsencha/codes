#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        a == b && b == c && c == d ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}