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
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        
        vector<long long> a(n);
        vector<int> b(n);

        loopI(i, n) cin >> a[i];
        loopI(i, n) cin >> b[i];

        long long maxVal = 0;
        loopI(i, n)
        {
            if(b[i])
            {
                long long add = min(k, (long long)n - 1);
                a[i] += add;
                k -= add;
            }
        }

        loopI(i, n)
        {
            vector<long long> c;
            loopI(i, n)
            {
                
            }
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