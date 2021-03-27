#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int t=1,flag=1;
    while(n!=0)
    {
        if(n%t==0)
        {
            n=n/10;
            t++;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag) cout<<"Yes"<<endl;
    else cout <<"No"<<endl;
    return 0;
}
