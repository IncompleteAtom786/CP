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

        vector<int> numArray(n);
        priority_queue<int, vector<int>, greater<int>> Q;
        for(int i = 0; i < n; i++){
            cin >> numArray[i];
            Q.push(numArray[i]);
        }

        while(Q.size() > 1){
            int first = Q.top();
            Q.pop();
            int second = Q.top();
            Q.pop();
            // cout << first << " " << second << " " ;

            Q.push((first + second) / 2);
        }

        cout << Q.top() << endl;

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
