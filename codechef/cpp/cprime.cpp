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
int isPrime(int n){
    if( n<= 1) return 0;
    else if(n%2==0 && n!=2) return 0;
    else{
        for(int i=3; i*i<=n; i+=2){
            if(n%i==0) 
                return 0;
        }
        return 1;
    }
}
void test_case()
{
    //cout << "Hello World\n";
    int n;
    string s;
    cin >> n;
    s= to_string(n);
    if(s.length() == 1 || !isPrime(n)) 
    {
        cout<<"No\n";
        return;
    }
    for(int i=0, j=s.length()-1; i<=j; ++i, --j){
        if(s[i] != s[j]){
            cout<<"No\n";
            return;
        }
    }
    cout<<"Yes\n";
    
}
void debug()
{
    
}
int main()
{
    fastio;
    testCases
        test_case();
        //debug();
}
