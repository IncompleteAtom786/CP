#include <bits/stdc++.h>
#define sorted(v) sort(v.begin(), v.end())
#define ll long long
#define loopI(i, n) for (int i = 0; i < n; i++)
#define loopD(i, n) for (int i = n - 1; i >= 0; i--)

using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        sort(v.begin(), v.end());

        if (v[0] == v[n - 1]) cout << (n * (n - 1)) << endl;
        else
        {
            long long minECount = 0, maxECount = 0, i = 0;

            while (v[0] == v[i]) minECount++, i++;

            i = n - 1;
            while (v[n - 1] == v[i]) maxECount++, i--;

            cout << (maxECount * minECount * 2) << endl;
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