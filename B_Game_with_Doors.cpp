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
        int l, r, a, b;
        cin >> l >> r >> a >> b;

        vector<int> doors(101, 0);
        int v = min(r, b) - max(l, a);

        if(l < a) doors[a - 1] = true;
        if(a < l) doors[l - 1] = true;
        if(b > r) doors[r] = true;
        if(r > b) doors[b] = true;

        int result = 0;
        for(int i = 1; i <= 100; i++) result += doors[i];

        if(v < 0) result = 0;
        cout << max(1, result + max(0, min(r, b) - max(l, a))) << endl;
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