#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int elements,add_factor;
	    cin >> elements >> add_factor;
	    int value[elements];
	    int sum_all=0;
	    for(int i=0 ; i< elements;i++){
	        cin >> value[i];
	        sum_all+=value[i];
	    }
	    int count=0;
	    for(int i=0;i<elements;i++){
	        if(sum_all-value[i]<value[i]+add_factor){
	            count++;
	        }
	    }
	    cout << count <<endl;
	}
	return 0;
}
