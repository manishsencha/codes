#include <iostream>
using namespace std;
/*int sumarr(long long arr[], long long n)
{
    long long salary=0,i;
    for(i=0;i<n;i++) salary+=arr[i];
    return salary;
}*/
/* void salary_increase(long long arr[],long long l, long long r, long long v)
{
    for(long long i=l;i<=r;i++)
        arr[i]+=v;
} */
int main()
{
	// your code goes here
	int t;
	cin >>t;
	while(t--)
	{
	    long long n,q,i,j;
	    cin >> n >> q;
	    long long arr[n]={0},l,r,v,salary=0;
	    for(i=0; i < q; i++)
	    {
	        cin >> l >> r >> v;
            salary+=(r-l+1)*v;
	    }
	    cout << salary <<endl;
	}
	return 0;
}
