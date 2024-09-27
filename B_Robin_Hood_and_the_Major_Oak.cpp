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
        int n, k;
        cin >> n >> k;

        long long leaves = 0;

        if ((n - k + 1) % 2 == 1 && n % 2 == 1)leaves = ceil((k - 1) / 2.0) + 1;
        else leaves = ceil((k - 1) / 2.0);

        int result = leaves;
        // cout << result << endl;
        cout << (result % 2 == 0 ? "YES" : "NO") << endl;
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
