#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int len;
        string str;
        cin >> len;
        cin >>str;
        int flag=1;
        for(int i=0;i< len -1 ;i++)
        {
            if(str[i]==str[len-1])
            {
                flag=0;
                cout <<"YES\n";
                break;
            }
        }
        if(flag)
        {
            cout<<"NO\n";
        }
        
    }
}
