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
        int n, m, k, x, y;
        cin >> n >> m >> k >> x >> y;
        
        string result = "YES";
        for (int i = 0; i < k; ++i) 
        {
            int kx, ky;
            cin >> kx >> ky;
            if ((x + y) % 2 == (kx + ky) % 2)  result = "NO";
        }
        cout << result << endl;
        
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