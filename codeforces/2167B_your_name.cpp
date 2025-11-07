#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int len;
        cin >> len;
        string first, second;
        cin >> first >> second;
        sort(first.begin(), first.end());
        sort(second.begin(), second.end());
        first == second ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}