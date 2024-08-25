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
        cin >> n;
        vector<int> v(n);
        loopI(i, n) cin >> v[i];

        cin >> k;
        while(k--)
        {
            string str;
            cin >> str;

            map<char, int> val;
            map<int, char> val2;
            bool flag = true;

            if(str.length() != n) flag = false;
            else
            {
                loopI(i, n)
                {
                    if(val.find(str[i]) == val.end()) val[str[i]] = v[i];
                    if(val2.find(v[i]) == val2.end()) val2[v[i]] = str[i];
                    if(val[str[i]] != v[i] || val2[v[i]] != str[i])
                    {
                        flag = false;
                        break;
                    }
                }
            }
            

            if(flag) cout << "YES";
            else cout << "NO";

            cout << endl;

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