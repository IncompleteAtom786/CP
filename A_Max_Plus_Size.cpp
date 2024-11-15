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

        vector<int> a(n);
        for(auto &num : a) cin >> num;

        int result = 0;
        if(n % 2 == 0){
            result = *max_element(a.begin(), a.end());
            result += n / 2;
        }
        else{
            for(int i = 0; i < n; i++){
                if(i % 2 == 0) result = max((a[i] + (n / 2) + 1), result);
                else result = max((a[i] + (n / 2)), result);
            }
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
