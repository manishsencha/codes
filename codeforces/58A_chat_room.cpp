#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define rep(i, n) for (i = 0; i < n; ++i)
#define REP(i, k, n) for (i = k; i <= n; ++i)
#define REPR(i, k, n) for (i = k; i >= n; --i)
#define vi vector<int>
#define vll vector<long long int>
#define vs vector<string>
#define vc vector<char>
#define pii pair<int, int>
#define mpair(a, b) make_pair(a, b)
#define pback(a) push_back(a)
#define scan(x) cin >> x
#define scanTwo(x, y) cin >> x >> y
#define print(x) cout << x << " "
#define printn(x) cout << x << "\n"
#define printnTwo(x, y) cout << x << " " << y << "\n"
#define newl cout << "\n"
#define fin freopen("input.txt", "r", stdin)
#define fout freopen("output.txt", "w", stdout)
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)
#define testCases \
    int T;        \
    cin >> T;     \
    while (T--)

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    else if (n % 2 == 0 && n != 2)
        return false;
    else
    {
        for (int i = 3; i * i <= n; i += 2)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
}

template <typename T>
void printList(initializer_list<T> arr)
{
    for (const auto &value : arr)
        cout << value << " ";
    cout << '\n';
}

int lcs(string s1, string s2, int i, int j)
{
    if (i == s1.length() || j == s2.length())
        return 0;
    if (s1[i] == s2[j])
        return 1 + lcs(s1, s2, i + 1, j + 1);
    return max(lcs(s1, s2, i + 1, j), lcs(s1, s2, i, j + 1));
}

void test_case()
{
    // cout << "Hello World\n";
    string s;
    cin >> s;
    string hello = "hello";
    if (lcs(s, hello, 0, 0) == hello.length())
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}

int main()
{
    fastio;
    // testCases
    test_case();
    // debug();
}
