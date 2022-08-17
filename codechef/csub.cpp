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
    int n;
     cin >> n;
    string str;
    cin >> str;
    int count=0;
    ll sum=0;
   for(int i=0;i<n;i++)
        if(str[i]=='1')
        {
            count++;
            sum+=count;
        }
    cout<<sum<<"\n";
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

