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
        int n, m, q;
        cin >> n >> m >> q;
        
        int t1, t2;
        cin >> t1 >> t2;

        int david, result;
        cin >> david;

        if(david < t1) result = t1 - 1;
        else if (david > t2) result = n - t2;
        else
        {
            int middle = (t2 + t1) / 2;
            result = min(abs(middle - t1), abs(middle - t2));
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