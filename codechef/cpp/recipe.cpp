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


long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

void test_case()
{
    //cout << "Hello World\n";
    int n;
    cin >> n;
    if(n==1){
        int x;
        cin >> x;
        cout << x<<"\n";
    }
    else
    {
        int arr[n];
        cin >> arr[0] >> arr[1];
        ll num = gcd(arr[0],arr[1]);
        for(int i=2; i<n; ++i){
            cin >> arr[i];
            num = gcd(num,arr[i]);
        }
        for(int i=0; i<n; i++){
            cout << arr[i]/num <<" ";
        }
        newl;
    }
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
