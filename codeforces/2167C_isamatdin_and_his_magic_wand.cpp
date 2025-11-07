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
        vector<long long int> v(n);
        bool all_even = true, all_odd = true;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
            {
                all_odd = false;
            }
            else
            {
                all_even = false;
            }
        }
        // if all are even
        // if all are odd
        // if there are both
        if (!(all_even || all_odd))
        {
            sort(v.begin(), v.end());
        }
        for (auto i : v)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}