#include<bits/stdc++.h>
#define sorted(v) sort(v.begin(), v.end())
#define ll long long
#define loopI(i,n) for(int i = 0; i < n; i++) 
#define loopD(i,n) for(int i = n - 1; i >= 0; i--) 

long long findDist(long long x1, long long y1, long long x2, long long y2)
{
    return (((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
}

using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<long, long>> circles(n);
        loopI(i, n) cin >> circles[i].first >> circles[i].second;

        long long xs, ys, xt, yt;
        cin >> xs >> ys >> xt >> yt;

        long long timeToReachDest = findDist(xs, ys, xt, yt);

        bool circlesReachedDest = false;
        for(auto &circle : circles) 
        {
            if(findDist(xt, yt, circle.first, circle.second) <= timeToReachDest) 
            {
                circlesReachedDest = true;
                break;
            }
        }

        if(circlesReachedDest) cout << "NO";
        else cout << "YES";
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