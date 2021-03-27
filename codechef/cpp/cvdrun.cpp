#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin >>t;
	while(t--)
	{
	    int cities, jump_size, covid_city,my_city;
	    cin >> cities>> jump_size >> covid_city >>my_city;
	    int flag =1;
	    int check=covid_city;
	    do
	    {
	        covid_city = (covid_city + jump_size)%cities;
	        if(covid_city==my_city)
	        {
	            flag=0;
	            break;
	        }
	        if(covid_city==check)
	        {
	            flag=1;
	            break;
	        }
	    }
	     while(covid_city != my_city);
	    if(flag==1) cout << "NO\n";
	    else cout << "YES\n";
	}
	return 0;
}
