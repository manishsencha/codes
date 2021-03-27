#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int length,count=0,flag=1;
	    cin >> length;
	    char str[length];
	    cin >> str;
	    for(int i = 97; i<=122; i++ ){
	        for(int j=0;j<length; j++){
	            if(str[j]==i){
	                count++;
	            }
	        }
	        if(count%2!=0){
	            flag = 0;
	            break;
	        }
	        else{
	            flag=1;
	            count=0;
	        }
	    }
	    if(flag==1){
	        cout << "YES"<<endl;
	    }
	    else{
	        cout <<"NO"<<endl;
	    }
	}
	return 0;
}
