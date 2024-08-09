#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), result;
        for(int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        int left = 0, right = n - 1, i = 0;
        while(left <= right)
        {
            if(i % 2 == 0) result.push_back(a[right--]);
            else result.push_back(a[left++]);

            i++;
        }
        
        for(int i = n - 1; i >= 0; i--) cout << result[i] << " ";
        cout << endl;
    }
}