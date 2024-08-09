#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;

        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        cin >> m;
        vector<int> b(m);
        for (int i = 0; i < m; i++) cin >> b[i];
        
        int max1 = max(0, a[0]), max2 = max(0, b[0]);
        for(int i = 1; i < n; i++) 
        {
            a[i] += a[i - 1];
            max1 = max(max1, a[i]);
        }
        for(int i = 1; i < m; i++) 
        {
            b[i] += b[i - 1];
            max2 = max(max2, b[i]);
        }

        int result = max(0, max1 + max2);
        cout << result << endl;        
    }
}