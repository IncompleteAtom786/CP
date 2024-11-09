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
        int n, r;
        cin >> n >> r;

        vector<int> fam(n);
        for (auto &family : fam){
            cin >> family;
        }

        // vector<vector<int>> bus(r, vector<int>(2, 0));
        int rowsLeft = 0, row = 0, happy = 0;
        for (int &f : fam)
        {
            while (row < r && f >= 2)
            {
                f -= 2;
                happy += 2;
                row++;
            }
        }

        for (int &f : fam){
            if(f > 0 && row < r){
                happy += f;
                row++;
            }
            else if(f > 0){
                happy -= f;
            }
        }
        cout << happy << endl;
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
