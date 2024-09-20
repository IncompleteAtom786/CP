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
        int n;
        cin >> n;

        int minE = INT_MAX;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] == 1) v[i]++;
        }

        for(int i = 1; i < n; i++) if(v[i] % v[i - 1] == 0) v[i]++;

        for(auto &i : v) cout << i << " ";
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