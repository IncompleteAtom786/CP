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
        int x, y, k, result = 0;
        cin >> x >> y >> k;

        int i_x = 0, i_y = 0;
        bool X = true;
        while(i_x < x || i_y < y)
        {
            if(X) i_x += k;
            else i_y += k;

            X = !X;
            result++;
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