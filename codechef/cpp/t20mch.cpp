#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int score_A, played, score_B;
	cin >> score_A >> played >> score_B;
	if((((20 - played)*36) + score_B) > score_A) {
	    cout << "YES\n";
	}
	else {
	    cout << "NO\n";
	}
	return 0;
}