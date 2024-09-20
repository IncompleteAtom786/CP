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
        string p;
        for(int i = 0; i < n; i++) cin >> v[i];
        cin >> p;

        vector<int> result(n);
        vector<bool> mainV(n, false);
        for(int i = 0; i < n; i++)
        {
            vector<bool> visited(n, false);
            int eleI = v[i] - 1, count = 0;
            while(visited[eleI] == false)
            {
                if(p[eleI] == '0') count++;
                visited[eleI] = true;
                if(mainV[eleI]) 
                {
                    count = result[eleI];
                    break;
                }
                eleI = v[eleI] - 1;
            }
            result[i] = count;
            mainV[i] = true;
        }

        for(int i = 0; i < n; i++) cout << result[i] << " ";
        cout << endl;
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