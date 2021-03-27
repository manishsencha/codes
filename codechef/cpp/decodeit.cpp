#include <bits/stdc++.h>
#define ll long long int
#define f(i,a,b) for(int i=a;i<b;i++)
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
void test_case()
{
    //cout << "Hello World\n";
    int n; 
    cin >> n; 
    string s;
    cin >> s;
    // ascii value of a = 97
    int mn = 97, mx = mn + 16;
    int mul = 8;
    int cnt = 0;
    int flag = 0;
    for(int i=0; i<n; ++i) {
        if(s[i] == '0'){
            mx = mx - mul;
            flag = 1;
        }
        else{
            mn = mn + mul; 
            flag = 0;
        }
        mul/=2;
        if(mul == 0) {
            flag == 0 ? (cout << (char) (mx-1)) : (cout << (char) mn) ;
            mn = 97;
            mx = mn + 16;
            mul = 8;
        }
    }
    newl;
    
}

int main()
{
    fastio;
    testCases
        test_case();
        //debug();
}
