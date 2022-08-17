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

// hell bell zest test
// (hell bell) (hell zest) (hell test) (bell hell) (bell zest) (bell test) (zest hell) (zest bell) (zest test)
// (bell hell) (zell hest) (tell hest) (hell bell) (zell best) (tell best) (hest zell) (best zell) (test zest)
// (zell hest) (tell hest) (zell best) (tell best) (hest zell) (best zell)

// hell bell best test
// (hell bell) (hell best) (hell test) (bell hell) (bell best) (bell test) (best hell) (best bell) (best test) (test hell) (test bell) (test best)
// (bell hell) (bell hest) (tell hest) (hell bell) (bell best) (tell best) (hest bell) (best bell) (test best) (hest tell) (best tell) (best test)
// (tell hest) (hest tell)


// hell bell best test
// (hell bell) (hell best) (hell test) (bell best) (bell test) (best test) 
// (bell hell) (bell hest) (tell hest) (bell best) (tell best) (test best)
// (tell hest)

// hell bell zest test
// (hell bell) (hell zest) (hell test) (bell zest) (bell test) (zest test)
// (bell hell) (zell hest) (tell hest) (zell best) (tell best) (test zest)
// (zell hest) (tell hest) (zell best) (tell best)

// hell bell zest test
// (hell bell) (hell zest) (hell test) (bell zest) (bell test) (zest test)
void test_case()
{
    // cout << "Hello World\n";
    int n, c = 0;
    cin >> n;
    unordered_set<string> s;
    unordered_map<string, bool> ump;
    unordered_set<char> ch;
    for(int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        s.insert(str);
        ch.insert(str[0]);
        ump[str] = true;
    }
    unordered_set<string> fstr;
    for(auto &i : ch) {
        for(auto &j : s) {
            string temp = j;
            temp[0] = i;
            if(ump[temp] != true) 
                fstr.insert(temp);
        }
    }
    if(fstr.size() <= s.size()) {
        for(auto &i : fstr) {
            for(auto &j : fstr) {
                string a, b;
                a = i, b = j;
                swap(a[0], b[0]);
                if(ump[a] == true && ump[b] == true) {
                    c++;
                }
            }
        }   
        cout << c <<'\n';
        return;
    }
    for(auto &i : s) {
        for(auto &j : s) {
            string a = i, b = j;
            
            swap(a[0], b[0]);
            if(a[0] == b[0]) {
                continue;
            }
            else if(ump[a] != true && ump[b] != true) {
                c++;
            }
        }
    }
    cout << c << '\n';
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
