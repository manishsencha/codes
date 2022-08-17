#include <iostream>
using namespace std;
int main()
{
	// your code goes here
	int t;
	cin >>t;
	while(t--)
	{
	    int n,k,l;
	    cin >> n >> k >> l;
	    if(k*l<n || (k==1 && n!=1))
	    {
	        cout << "-1"<<endl;
	    }
	    else
	    {
	        for(int i=1,x=1;i<=n; i++,x++)
	        {
	            if(x > k)
	            {
	                x=1;
	            }
	            cout << x << " ";
	        }
	        cout << endl;
	    }
	}
	return 0;
}
