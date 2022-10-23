// Incorrect
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
// 9
// 8 9 6 7 5 4 3 2 1

void test_case()
{
    // cout << "Hello World\n";
    // 7 8 6 5 4 3 2 1
    int n;
    cin >> n;
    if (n == 2)
    {
        cout << "2 1\n";
        return;
    }
    if (n == 3)
    {
        cout << -1 << endl;
        return;
    }
    vector<int> v(n);
    v[0] = n - 1;
    v[1] = n;
    for (int i = 0; i + 1 < n - 3; i += 2)
    {
        v[i] = n - i - 1;
        v[i + 1] = n - i;
    }
    if (n != 5)
    {

        for (int i = 0; i < n; ++i)
        {
            if (v[n - i - 1] == 0)
            {
                v[n - i - 1] = i + 1;
            }
        }
    }
    else {
        v[2] = 1;
        v[3] = 2;
        v[4] = 3;
    }
    for (auto i : v)
    {
        cout << i << ' ';
    }
    cout << endl;
}

int main()
{
    fastio;
    testCases
    test_case();
    // debug();
}
