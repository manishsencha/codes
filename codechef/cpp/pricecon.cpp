#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int items, peak_price;
	    cin >> items >> peak_price;
	    int arr[items];
	    int i_revenue=0,f_revenue=0,l_revenue=0;
	    for(int i=0;i<items;i++){
	        cin >> arr[i];
	        i_revenue+=arr[i];
	        if(arr[i]>peak_price){
	            f_revenue+=peak_price;
	        }
	        else{
	            f_revenue+=arr[i];
	        }
	    }
	    l_revenue=i_revenue-f_revenue;
	    cout << l_revenue<<"\n";
	}
	return 0;
}
