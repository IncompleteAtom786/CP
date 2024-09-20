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

        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        if(n == 1) cout << 0 << endl;
        else
        {
            map<int, int> freq;
            for(auto &i : v) freq[i]++;

            int highFreq = 0;
            for(auto &it : freq) highFreq = max(highFreq, it.second);

            if(highFreq == 1) cout << n - 1 << endl;
            else cout << n - highFreq << endl;
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