#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        int count=1;
        int min = arr[0];
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>=arr[i+1] && arr[i+1]<=min )
            {
                min = arr[i+1];
                count++;
            }
        }
        cout<<count<<"\n";
    }
    
}
