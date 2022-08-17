#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int length, breadth;
	cin >> length >> breadth;
	int area, perimeter;
	area = length *breadth;
	perimeter=2*(length +breadth);
	if(area>perimeter){
	    cout << "Area\n" << area;
	}
	else if(area ==perimeter){
	    cout << "Eq\n" << area;
	}
	else{
	    cout << "Peri\n" << perimeter;
	}
	return 0;
}

