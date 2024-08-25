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
        string str = to_string(n);
        if(str[0] == '1')
        {
            if(str.size() > 1 && str[1] == '0')
            {
                if(str.size() > 2 && str[2] != '0')
                {
                    int t = stoi(str.substr(2));
                    if(t >= 2) cout << "YES" << endl;
                    else cout << "NO" << endl;
                }
                else cout << "NO" << endl;
            }
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
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