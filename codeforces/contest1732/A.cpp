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

void test_case()
{
    // cout << "Hello World\n";
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    int fg = v[0];
    for (int i = 1; i < n; ++i)
    {
        fg = __gcd(fg, v[i]);
    }
    if (fg == 1)
    {
        cout << 0 << endl;
        return;
    }
    if (__gcd(n, fg) == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (__gcd(n - 1, fg) == 1)
    {
        cout << 2 << endl;
        return;
    }
    cout << 3 << endl;
}

// 120 60 60 40 80 -> 20
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20

int main()
{
    fastio;
    // fin;
    // fout;
    testCases
    test_case();
    // debug();
}
