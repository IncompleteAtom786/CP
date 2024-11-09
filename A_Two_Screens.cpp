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
        string s, t;
        cin >> s >> t;

        int result = 0, i = 0;
        while(i < min(s.length(), t.length()) && s[i] == t[i]){
            result++;
            i++;
        }
        if(i > 0) result++;

        int j = i;
        while(i < s.length()){
            i++;
            result++;
        }

        while(j < t.length()){
            j++;
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
