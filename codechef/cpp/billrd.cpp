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
    int n, k, x, y;
    cin >> n >> k >> x >> y;
    if(x == y){
        cout << n << " " << n <<"\n";
        return;
    } 
    vector<pair<int , int >> arr;
    int c = y-x;
    if(c < 0 ){
        arr.push_back(make_pair(n, n+c));
        arr.push_back(make_pair(c+n , n));
        arr.push_back(make_pair(0, abs(c)));
        arr.push_back(make_pair(abs(c) ,0));
    }
    else{
        arr.push_back(make_pair(n-c , n));
        arr.push_back(make_pair(n, n-c));
        arr.push_back(make_pair(abs(c) ,0));
        arr.push_back(make_pair(0, abs(c)));
    }
    cout << arr[(k-1)%4].first << " " << arr[(k-1)%4].second<<'\n';
}

int main()
{
    fastio;
    testCases
        test_case();
        //debug();
}
