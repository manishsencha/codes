#include <bits/stdc++.h>
#define ll long long int
#define f(i,a,b) for(int i=a;i<b;i++)
#define vi vector<int>
#define vll vector<long long int>
#define vs vector<string>
#define vc vector<char>
#define pii pair<int int>
#define scan(x) cin >> x
#define scanTwo(x,y) cin >> x >> y
#define print(x) cout << x <<" "
#define printn(x) cout <<x<<"\n"
#define newl cout << "\n"
#define fin freopen("input.txt","r",stdin)
#define fout freopen("output.txt","w",stdout)
#define fastio ios::sync_with_stdio(0);\
               cin.tie(0);\
               cout.tie(0);
#define testCase int T;\
               cin >> T;\
               while(T--)

using namespace std;
void test_case()
{
    //cout << "Hello World\n";
    ll n;
    cin >> n;
    ll sum =0, ans =0;
    while(n--)
    {
        ll num;
        cin >> num;
        ans |= num;
        sum+=num;
        ans |= sum;
    }
    printn(ans);
    
}
void debug()
{
    
}
int main()
{
    fastio;
    testCase
        test_case();
        //debug();
}

