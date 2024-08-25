#include<bits/stdc++.h>
#define sorted(v) sort(v.begin(), v.end())
#define ll long long
#define loopI(i,n) for(int i = 0; i < n; i++) 
#define loopD(i,n) for(int i = n - 1; i >= 0; i--) 

using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        
        vector<pair<int, int>> v;

        if(k % 2) v.push_back({x, y});

        for(int i = 1; i <= k / 2; i++) v.push_back({x - i, y - i});
        for(int i = 1; i <= k / 2; i++) v.push_back({x + i, y + i});

        for(auto &it : v) cout << it.first << " " << it.second << endl;
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