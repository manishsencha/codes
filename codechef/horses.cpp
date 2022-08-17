#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            int c;
            cin >> c;
            arr.push_back(c);
        }
        sort(arr.begin(), arr.end());
        int min =arr[1]-arr[0];
        for(int i=1;i<n-1;i++)
        {
            if(arr[i+1]-arr[i]<min) min = arr[i+1] - arr[i];
        }
        cout << min << endl;
    }
}
