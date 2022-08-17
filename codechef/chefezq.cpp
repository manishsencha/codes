#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while(t--)
    {
        ll queries, solved;
	    cin >> queries >> solved;
	    ll arr[queries];
	    for(ll i=0;i<queries;i++ )
	    {
	        cin >> arr[i];
	    }
	    ll count=0,flag=1;
	    for(ll i=0;i<queries-1;i++)
	    {
	        if(arr[i]<solved)
	        {
                flag=0;
	            cout << ++count <<"\n";
	            break;
	        }
	        else
	        {
	            count++;
	            arr[i+1]=arr[i+1] + arr[i]-solved;
	        }
	    }
	    ll carryover=arr[queries-1];
        if(flag==1)
        {
            if(carryover < solved)
            {
                cout << ++count <<"\n";
            }
            else
            {
                cout << ++count+(carryover/solved)<<"\n";
            }
        }
    }
}
