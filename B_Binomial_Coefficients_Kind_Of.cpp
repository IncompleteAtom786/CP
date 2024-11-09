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
    vector<int> n(t, 0), k(t, 0);

    for(auto &nI : n){
        cin >> nI;
    }

    for(auto &kI : k){
        cin >> kI;
    }

    int i = 0;

    vector<vector<long long>> C(10001, vector<long long>(10001, 0));
    for (int n = 0; n < 1000; n++)
    {
        C[n][0] = 1;
        C[n][n] = 1;
        for (int k = 1; k < n; k++) // loop over k from 1 to n-1 (inclusive)
            C[n][k] = (C[n][k - 1] + C[n - 1][k - 1]) % 1000000007;
    }

    while (i < t)
    {
        int N = n[i], K = k[i];

        cout << C[N][K] << endl;
        i++;
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
