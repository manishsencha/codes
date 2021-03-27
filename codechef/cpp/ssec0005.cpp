#include <iostream>
#include<vector>
using namespace std;
int main()
{
    long long t; 
    cin >> t;
    while(t--)
    {
        long long n;
        cin>>n;
        int num=0,n2;
        n2=n;
        vector <long long> arr;
        long i=0,c=0;
        while(n>0)
        {
            arr.push_back(n%10-2);
            c++;
            n/=10;
        }
        for(long long i=c-1;i>=0;i--) cout <<arr[i];
        cout << endl;
    }
    return 0;
}
