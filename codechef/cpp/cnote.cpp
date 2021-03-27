#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y,k,n;
        cin >> x >> y >> k >> n;
        vector<pair<int , int >> arr;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin >> a >> b;
            arr.push_back(make_pair(a,b));
        }
        int flag=1;
        for(int i=0;i<n;i++)
        {
            if(arr[i].first>=x-y && arr[i].second <= k)
            {
                flag=0;
                cout << "LuckyChef\n";
                break;
            }
        }
        if(flag) 
        {
            cout <<"UnluckyChef\n";
        }
    }
}
