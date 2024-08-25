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
        vector<bool> visited(n + 1, false);
        vector<int> arr(n + 1, 0);

        for (int i = 1; i <= n; i++) cin >> arr[i];
        visited[arr[1]] = true;

        bool flag = true;
        for (int i = 2; i <= n; i++)
        {
            int value = arr[i];
            if (visited[value - 1] == false || visited[value + 1] == false) visited[value] = true;
            else
            {
                flag = false;
                break;
            }
        }

        if (flag) cout << "YES" << endl;
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