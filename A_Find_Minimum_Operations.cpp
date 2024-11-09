#include <bits/stdc++.h>
#define sorted(v) sort(v.begin(), v.end())
#define ll long long
#define loopI(i, n) for (int i = 0; i < n; i++)
#define loopD(i, n) for (int i = n - 1; i >= 0; i--)

using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int result = 0;
        if(k == 1){
            cout << n << endl;
        }
        else if (k == 10){
            while(n > 0){
                result += (n % 10);
                n /= 10;
            }
            cout << result << endl;
        }
        else{
            while (n >= k)
            {
                int sub = 1, i = 0;
                while (pow(k, i + 1) <= n)
                {
                    i++;
                    sub = pow(k, i);
                }
                // cout << sub << " ";
                n -= sub;
                result++;
            }
            cout << result + n << endl;
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
