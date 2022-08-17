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
    int n;
    scan(n);
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++) 
    {
        cin >> arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    int first = arr[0];
    int last = sum-arr[0];
    int i=1;
    while(first < last && i<n-1)
    {
        first += arr[i];
        last -= arr[i];
        i++;
    }
    int ans;
    {
        if(first>=last)
        {
            ans = first;
        }
        else {
            ans = last;
        }
    }
    if(n==4)
    {
        if(arr[1]+arr[2] <= ans && arr[0]+arr[3] <= ans)
        {
            if(arr[1]+arr[2] >= arr[0]+arr[3])
            {
                ans = arr[1]+arr[2];
            }
            else
            {
                ans = arr[0]+arr[3];
            }
        }
    }
    cout<<ans<<"\n";
    
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
