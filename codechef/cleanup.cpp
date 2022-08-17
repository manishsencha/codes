#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n>> m;
        int com[m];
        int tot[n];
        for(int i=0;i<m;i++)
        {
            cin >> com[i];
        }
        sort(com, com + m);
        for(int i=0;i<n;i++)
        {
            tot[i]=i+1;
        }
        vector <int > chef;
        vector <int > assist;
        int c=0;
        for(int i=0;i<n;i++)
        {
            int flag=1;
            for(int j=0;j<m;j++)
            {
                if(tot[i] == com[j])
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1 && c%2==0) 
            {
                chef.push_back(tot[i]);
                c++;
            }
            else
            {
                if(flag==1 && c%2!=0)
                {
                    assist.push_back(tot[i]);
                    c++;
                }
            }
        }
        for(auto i: chef)
        {
            cout << i<<" ";
        }
        cout <<"\n";
        for(auto i: assist)
        {
            cout << i<< " ";
        }
        cout<<"\n";
    }
}
