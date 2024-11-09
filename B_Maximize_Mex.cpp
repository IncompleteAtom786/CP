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
        int n, x;
        cin >> n >> x;

        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        int maxE = *max_element(v.begin(), v.end());
        vector<bool> visited(maxE + 1, false);
        for(int i = 0; i < n; i++){
            visited[v[i]] = true;
        }

        bool gotAnswer = false;
        for(int i = 0; i < visited.size(); i++){
            if(!visited[i]){
                cout << i << endl;
                gotAnswer = true;
                break;
            }
        }

        if(!gotAnswer){
            cout << maxE + x << endl;
        }
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
