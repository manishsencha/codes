#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int num;
	cin >> num;
	int count=1;
	while(num/10 != 0){
	    num=num/10;
	    count++;
	}
	if(count ==1 ) cout << "1\n";
	else if (count ==2) cout << "2\n";
	else if (count ==3) cout <<"3\n";
	else cout << "More than 3 digits\n";
	return 0;
}
