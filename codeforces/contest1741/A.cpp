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
    string s1, s2;
    cin >> s1 >> s2;
    int n1 = s1.length(), n2 = s2.length();
    if (s1 == s2)
    {
        cout << "=\n";
    }
    else if ((s1[n1 - 1] == 'L' && s2[n2 - 1] == 'M') || (s1[n1 - 1] == 'L' && s2[n2 - 1] == 'S') || (s1[n1 - 1] == 'M' && s2[n2 - 1] == 'S'))
    {
        cout << ">\n";
    }
    else if ((s1[n1 - 1] == 'S' && s2[n2 - 1] == 'M') || (s1[n1 - 1] == 'M' && s2[n2 - 1] == 'L') || (s1[n1 - 1] == 'S' && s2[n2 - 1] == 'L'))
    {
        cout << "<\n";
    }
    else
    {
        if (n1 > n2)
        {
            if (s1[n1 - 1] == 'L')
            {
                cout << ">\n";
            }
            else
            {
                cout << "<\n";
            }
        }
        else
        {
            if (s1[n1 - 1] == 'L')
            {
                cout << "<\n";
            }
            else
            {
                cout << ">\n";
            }
        }
    }
}

int main()
{
    fastio;
    testCases
    test_case();
    // debug();
}
