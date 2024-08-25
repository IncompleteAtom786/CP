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
        ll n;
        cin >> n;
        vector<int> a(n), b(n);
        loopI(i, n) cin >> a[i];
        loopI(i, n) b[i] = a[(i + 1) % n];
        for (auto dff : b) cout << dff << " ";
    
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