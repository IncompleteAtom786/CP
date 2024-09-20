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

        if(n == 1) cout << 1 << endl;
        else if(n % 2 == 0) cout << -1 << endl;
        else 
        {
            int ele = 1;
            vector<int> p(n);
            int i = n / 2;
            p[i] = ele++;
            int left = i - 1, right = i + 1;
            while(left >= 0 && right < n) p[right++] = ele++, p[left--] = ele++;

            for(int i = 0; i < n; i++) cout << p[i] << " ";
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