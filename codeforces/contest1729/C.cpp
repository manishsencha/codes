#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int((x).size()))

#define MOD 1000000007
#define ll long long

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

void dfs(vector<int> adj[], int n, int source, int destination, vector<bool> &vis, vector<int> &currPath, vector<vector<int>> &res)
{
    if (source == destination)
    {
        res.push_back(currPath);
        return;
    }
    vis[source] = true;
    for (auto i : adj[source])
    {
        if (!vis[i])
        {
            currPath.push_back(i);
            dfs(adj, n, i, destination, vis, currPath, res);
            currPath.pop_back();
        }
    }
    vis[source] = false;
}

void solve()
{
    string s;
    cin >> s;
    int n = sz(s);
    vector<int> adj[n];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i == j)
                continue;
            adj[i].push_back(j);
            adj[j].push_back(i);
        }
    }
    vector<vector<int>> res;
    vector<int> curr;
    vector<bool> vis(n, false);
    dfs(adj, n, 0, n - 1, vis, curr, res);
    int min_cost = INT_MAX, max_jump = INT_MIN;
    vector<int> ans;
    for (auto i : res)
    {
        int sum = 0;
        for (int j = 0; j < i.size() - 1; ++j)
        {
            sum += abs(s[i[j]] - s[i[j + 1]]);
        }
        // cout << "HERE : " << sum << '\n';
        if (max_jump < i.size() && min_cost > sum)
        {
            max_jump = i.size();
            min_cost = sum;
            ans = i;
        }
    }
    cout << min_cost << ' ' << max_jump << endl;
    for (int i = 0; i < ans.size(); ++i)
    {
        cout << ans[i] << ' ';
    }
    cout << endl;
}

int main()
{
    fastio;
    tc
    {
        solve();
    }
    return 0;
}