#include<bits/stdc++.h>
#define sorted(v) sort(v.begin(), v.end())
#define ll long long
#define loopI(i,n) for(int i = 0; i < n; i++) 
#define loopD(i,n) for(int i = n - 1; i >= 0; i--) 

using namespace std;

void backTrack(vector<int>& v, vector<vector<int>>& result, vector<int> temp, vector<bool>& visited, int maxE)
{
    if(temp.size() == v.size() && maxE == temp[0])
    {
        result.push_back(temp);
        return;
    }
    
    for(int i = 0; i < v.size(); i++)
    {
        if(visited[i]) continue;

        visited[i] = true; 
        temp.push_back(v[i]);

        backTrack(v, result, temp, visited, maxE);
        temp.pop_back();

        visited[i] = false;
    }
    
    return;
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        set<int> s;
        for(int i = 0; i < n; i++) 
        {
            cin >> v[i];
            s.insert(v[i]);
        }

        vector<int> a;
        for(auto &i : s) a.push_back(i);

        vector<vector<int>> result;
        vector<bool> visited(n + 1, false);
        sort(a.begin(), a.end(), greater<int>());
        backTrack(a, result, {}, visited, a[0]);

        sort(result.begin(), result.end());
        cout << result[0].size() << endl;
        for(int &i : result[0]) cout << i << " ";
        cout << endl;
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