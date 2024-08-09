#include<bits/stdc++.h>
#define sorted(v) sort(v.begin(), v.end())
#define ll long long
#define loop(i, n) for(int i = 0; i < n; i++) 

using namespace std;

string answer(int& n)
{
    string s, t;
    cin >> s >> t;

    loop(i, n)
    {
        if(s[i] == '0' && t[i] == '1') return "NO";
        if(s[i] == '1') return "YES";
    }

    return "YES";
}
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << answer(n) << endl;
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