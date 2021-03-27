#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin >>t;
	while(t--)
	{
	    long long students,i,j,flag,bunk;
	    cin >> students;
	    long long rollno[students-1];
	    for(i=0 ; i<students-1 ; i++)
	    {
	        cin >> rollno[i];
	    }
	    for(i=1;i<=students ;i++)
	    {
	        flag=0;
	        for(int j=0;j<students-1;j++)
	        {
	            if(rollno[j]==i)
	            {
	                break;
	            }
	            else{
	                if(j==students-2)
	                {
	                    bunk=i;
	                    flag=1;
	                    break;
	                }
	            }
	            
	        }
	    }
	    cout << bunk << endl;
	}
	return 0;
}
