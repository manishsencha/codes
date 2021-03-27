#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t; 
    cin>>t;
    while(t--)
    {
   
        long long int numOne , numTwo;
        cin >> numOne >> numTwo;
        long long int i,j;
        long long int flag=1;
        if(numOne*2<=numTwo)
        {
            cout << "-1\n";
        }
        else
        {
            
            cout<<numTwo<<"\n";
        }
    }
}
