#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int boxes, max_weight,i;
	    cin >> boxes >> max_weight;
	    int weight[boxes];
	    for(i=0;i<boxes;i++){
	        cin >> weight[i];
	    }
	    int current_weight=0,count=0;
	    for(i=0;i<boxes;i++){
	        current_weight+=weight[i];
	        if(weight[i]>max_weight){
	            count=0;
	            break;  
	        } 
	        if(current_weight+weight[i+1]>max_weight){
	            current_weight=0;
	            count++;
	        }
	    }
        if(count==0){
            cout <<"-1"<<endl;
        }
	    else {
	        cout << count <<endl;
	    }
	}
	return 0;
}
