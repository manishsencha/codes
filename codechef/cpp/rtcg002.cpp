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
    // DTMBC -> 238, 244, 138, 279, 186
    vector<pair<char, int>> def;
    def.push_back(make_pair('D', 238));
    def.push_back(make_pair('T', 244));
    def.push_back(make_pair('M', 138));
    def.push_back(make_pair('B', 279));
    def.push_back(make_pair('C', 186));
    string s;
    cin >> s;
    ll sum =0;
    for(int i=0; i<s.length(); ++i){
        for(int j=0; j<5; ++j){
            if(s[i] == def[j].first){
                sum += def[j].second;
                // cout << sum <<" ";
                break;
            }
        }
    }
    sum*=2;
    ll a=sum%10;
    sum/=10;
    ll b=sum%10;
    sum/=10;
    ll c = sum;
    cout <<c<<'\n'<<b<<'\n'<<a<<'\n';
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
