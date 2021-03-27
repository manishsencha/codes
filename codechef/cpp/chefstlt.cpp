#include <bits/stdc++.h>

using namespace std;
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
#define printTwo(x,y) cout << x <<" "<<y<<" "
#define printn(x) cout <<x<<"\n"
#define printnTwo(x,y) cout << x <<" "<<y<<"\n"
#define newl cout << "\n"
#define fin freopen("input.txt","r",stdin)
#define fout freopen("output.txt","w",stdout)
#define fastio ios_base::sync_with_stdio(0);\
               cin.tie(0);\
               cout.tie(0)
#define testCase int T;\
               cin >> T;\
               while(T--)

void test_case()
{
    //cout << "Hello World\n";
    string str1,str2;
    scanTwo(str1,str2);
    int max=0,min=0;
    for(int i=0;i<str1.length();i++)
    {
        if(str1[i]=='?' && str2[i]=='?')
        {
            max++;
        }
        else
        {
           if(str1[i]=='?')
           {
               max++;
           }
           else if(str2[i]=='?')
           {
               max++;
           }
            else if(str1[i]!=str2[i])
            {
                min++;
                max++;
            }
            else
           {
               continue;
           }
        }
    }
    printnTwo(min,max);
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

