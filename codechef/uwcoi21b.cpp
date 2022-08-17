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
void test_case()
{
    //cout << "Hello World\n";
    ll n, m;
    cin >> n >> m;
    vector<ll> arr1(n), arr2(m);
    for(ll i=0; i<n; ++i) cin >> arr1[i];
    for(ll i=0; i<m; ++i) cin >> arr2[i];
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    // 2 4 5 5 10
    // 1 2 3
    ll count =0;
    for(ll i=0; i<m; ++i){
        if(arr2[i] < arr1[0]){
            count++;
        }
    }
    count = count*n;
    cout << count <<"\n";
}
void debug()
{
    
}
int main()
{
    fastio;
    // testCases
        test_case();
        //debug();
}
