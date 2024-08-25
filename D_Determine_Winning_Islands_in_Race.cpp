#include<bits/stdc++.h>
#define sorted(v) sort(v.begin(), v.end())
#define ll long long
#define loopI(i,n) for(int i = 0; i < n; i++) 
#define loopD(i,n) for(int i = n - 1; i >= 0; i--) 

using namespace std;

const int MAXN = 200005;

vector<int> adj[MAXN], rev_adj[MAXN];
bool reachable[MAXN];

void bfs(int n) {
    memset(reachable, false, sizeof(reachable));
    queue<int> q;
    q.push(n);
    reachable[n] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for (int neighbor : rev_adj[node]) {
            if (!reachable[neighbor]) {
                reachable[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

string process_test_case(int n, int m, const vector<pair<int, int>>& alternative_bridges) {
    // Initialize adjacency lists
    for (int i = 1; i <= n; ++i) {
        adj[i].clear();
        rev_adj[i].clear();
    }

    // Add main bridges to both adj and rev_adj lists
    for (int i = 1; i < n; ++i) {
        adj[i].push_back(i + 1);
        rev_adj[i + 1].push_back(i);
    }

    // Add alternative bridges
    for (const auto& bridge : alternative_bridges) {
        int u = bridge.first;
        int v = bridge.second;
        adj[u].push_back(v);
        rev_adj[v].push_back(u);
    }

    // Perform BFS on the reversed graph starting from node n
    bfs(n);

    // Generate result string
    string result;
    for (int i = 1; i < n; ++i) {
        if (reachable[i]) {
            result.push_back('1');
        } else {
            result.push_back('0');
        }
    }

    return result;
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        
        vector<pair<int, int>> alternative_bridges(m);
        for (int i = 0; i < m; ++i) {
            int u, v;
            cin >> u >> v;
            alternative_bridges[i] = {u, v};
        }

        cout << process_test_case(n, m, alternative_bridges) << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}