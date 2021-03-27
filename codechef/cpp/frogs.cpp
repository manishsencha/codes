/*************Including Headers*****************/
#include <bits/stdc++.h>

/*************Defining Macros******************/

#define ll long long int
#define rep(i,n) for (i = 0; i < n; ++i) 
#define REP(i,k,n) for (i = k; i <= n; ++i) 
#define REPR(i,k,n) for (i = k; i >= n; --i) 
#define vi vector<int>
#define vll vector<long long int>
#define vs vector<string>
#define vc vector<char>
#define pii pair<int int>
#define mpair(a,b) make_pair(a,b)
#define pback(a) push_back(a)
#define scan(x) cin >> x
#define scanTwo(x,y) cin >> x >> y
#define print(x) cout << x <<" "
#define printn(x) cout <<x<<"\n"
#define printnTwo(x,y) cout <<x<<" "<<y<<"\n"
#define newl cout << "\n"
#define fin freopen("input.txt","r",stdin)
#define fout freopen("output.txt","w",stdout)
#define fastio ios::sync_with_stdio(0);\
               cin.tie(0);\
               cout.tie(0)
#define testCases int T;\
               cin >> T;\
               while(T--)

using namespace std;

/*************Common functions****************/

bool isPrime(int n) {
    if(n <= 1) return false;
    else if(n % 2 == 0 && n != 2) return false;
    else{
        for(int i = 3; i * i <= n; i+=2){
            if(n % i == 0) return false;
        }
        return true;
    }
}
/*
* Print the array
*/
template<typename T> 
void printList(initializer_list<T> arr) 
{ 
    for (const auto & value: arr) 
        cout << value << " "; 
    cout << '\n';
}
 
/*************Sulution starts here ************/

void test_case()
{
    // cout << "Hello World\n";
    int n;
		cin >> n;
		vector<int> weights(n), jumps(n);
		for (int i = 0; i < n; ++i) {
			cin >> weights[i];
		}
		for (int i = 0; i < n; ++i) {
			cin >> jumps[i];
		}
		
		if (is_sorted(weights.begin(), weights.end())) {
			cout << "0\n";
			return ;
		}
		/* for(auto i: weights) {
			cout << i<< " ";
		}
		cout << endl;
		*/
		if (n == 2) {
			if (jumps[0] == 1) {
				cout << "2\n";
				return ;
			}
			else {
				cout << "1\n";
				return ;
			}
		}
		int pos = 0, count = 0;
		for(int i = 0; i < n; ++i) {
		    if(weights[i] == 1) {
		        pos = i;
		        break;
		    }
		}
		int pos_next = 0;
		for(int i=2; i<=n; ++i) {
		    for(int j=0; j<n; ++j) {
		        if(weights[j] == i) {
		            pos_next = j;
		            break;
		        }
		    }
		    /*
		    * 3 
		    * 3 1 2 (0 1 2)
		    * 1 4 5 
		    * 4
            * 2 1 4 3 (0 1 2 3)
            * 4 1 2 4
		    */
		    
		    if(pos_next > pos) {
		        pos = pos_next;
		        continue;
		    }
		    
		    else {
		         int x = (pos - pos_next)/jumps[pos_next] + 1;
		      //   cout <<"before pos = " << pos <<"\n";
		         count += x;
		         pos = pos_next + (x * jumps[pos_next]);
		      //   cout <<"pos = " << pos <<" pos_next =  "<< pos_next <<" count = " << count << " x = " << x << "\n";
		    }
		}
		cout << count << "\n";
}
/*************Main function********************/


int main()
{
    fastio;
    testCases
        test_case();
        //debug();
}

/*************Program ends here****************/
