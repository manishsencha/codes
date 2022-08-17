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
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    vector<pair<int , char>> arr;
    int count =1;
    for(int i=0; i<s.length()-1; ++i){
        if(s[i] == s[i+1]){
            count++;
        }
        else{
            arr.push_back(make_pair(count, s[i]));
            count = 1;
        }
    }
    
    arr.push_back(make_pair(count, s[s.length()-1]));
    sort(arr.begin(), arr.end());
    // for(int i=0; i< arr.size(); ++i){
    //     cout << arr[i].first << " " << arr[i].second <<"\n";
    // }
    int cp=0, cnp=0;
    for(int i=0; i<arr.size(); ++i){
        if(arr[i].first % 2 != 0){
            cnp++;
        }
        cp+=arr[i].first/2;
    }
    if(cp <= cnp){
        cout << cp <<'\n';
    }
    else{
        int x = cp - cnp;
        cout << cnp + (x*2)/3 <<"\n";
    }
    // cout << count <<'\n';
    
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

