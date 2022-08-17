#include <bits/stdc++.h>
#define ll long long;
#define f(i,a,b) for(long long i=a;i<b;i++)
using namespace std;
bool powTwo(long long n)
{
    for(long long i=1;i<=n;i++)
    {
        if(pow(2,i)==n)
        {
            return true;
        }
    }
    return false;
}
void debug()
{
    long long n;
    cin >>n;
    long long arr[n];
    f(i,0,n) cin >> arr[i];
    f(i,0,n-1)
    {
        printf("Bitwise and of %d & %d is %d\n",arr[i],arr[i+1],(arr[i]&arr[i+1]));
    }
}
void test_case()
{
    long long n;
        cin >> n;
        if(n ==1)
        {
            cout << "1\n";
        }
        else if(n==2)
        {
            cout<<"-1\n";
        }
        else if(powTwo(n)) 
        {
            cout <<"-1\n";
        }
        else
        {
            vector <long long> arr;
            arr.push_back(2);
            arr.push_back(3);
            arr.push_back(1);
            for(long long i=4,c=4;i<=n;i++)
            {
                if(i%c==0)
                {
                    arr.push_back(i+1);
                    arr.push_back(i);
                    i++;
                    c*=2;
                }
                else
                {
                    arr.push_back(i);
                }
            }
            for(auto i:arr)
                cout<<i<<" ";
            cout<<"\n";
        }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    long long T;
    cin >>T;
    while(T--)
    {
        test_case();
        //debug();
    }
}

