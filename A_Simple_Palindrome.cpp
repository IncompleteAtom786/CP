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

        vector<char> str(n), vowels = {'a', 'e', 'i', 'o', 'u'};

        if(n <= 5) for(int i = 0; i < n; i++) cout << vowels[i];
        
        else
        {
            int rem = n % 5, count =  n / 5;
            map<char, int> freq;
            for(int i = 0; i < 5; i++) 
            {
                freq[vowels[i]] = (rem > 0 ? count + (rem > 0 ? 1 : 0) : count) ; 
                rem--;
            }

            for(auto &it : freq) for(int i = 0; i < it.second; i++) cout << it.first;
        }

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