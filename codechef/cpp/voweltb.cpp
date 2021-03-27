#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char C;
	std::cin >> C;
	if(C=='A' ||C=='E' ||C=='I'||C=='O'||C=='U'){
	    std::cout << "Vowel\n";
	}
	else{
	    std::cout <<"Consonant\n";
	}
	return 0;
}
