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

        string str;
        cin >> str;

        int sqr = floor(sqrt(n));

        if(sqr * sqr == n)
        {
            string t = "";
            for(int i = 0; i < sqr; i++)
            {
                for(int j = 0; j < sqr; j++)
                {
                    if(i == 0 || j == 0 || j == sqr - 1 || i == sqr - 1) t += '1';
                    else t += '0';
                }
            }
            if(t == str) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        else cout << "No" << endl;
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