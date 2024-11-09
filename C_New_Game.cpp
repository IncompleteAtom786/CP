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
        int n, k;
        cin >> n >> k;
        map<int, int> freq;

        vector<int> arr(n);
        for(auto &num : arr){
            cin >> num;
            freq[num]++;
        }

        long long result = 0, currK = 0;
        int i = 0, j = 0;
        while(j < n){
            if(j == 0 || (j > 0 && arr[j] == arr[j - 1] + 1)){
                
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
