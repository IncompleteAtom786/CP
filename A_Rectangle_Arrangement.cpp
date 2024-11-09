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

        int maxWidth = INT_MIN, maxHeight = INT_MIN;
        for(int i = 0; i < n; i++){
            int x, y;
            cin >> x >> y;
            maxWidth = max(maxWidth, x);
            maxHeight = max(maxHeight, y);
        }

        cout << 2 * (maxWidth + maxHeight) << endl;
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
