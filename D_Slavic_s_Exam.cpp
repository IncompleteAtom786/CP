#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, false, sizeof(x))
#define sortall(x) sort(all(x))
#define s2(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define mod 1000000007
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

bool isSubsequence(string &s1, string &s2)
{
}
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, s2, result;
        cin >> s;
        cin >> s2;
        int N = s.length(), n = s2.length();
        int i = 0, j = 0;
        while (i < N && j < n)
        {
            if (s[i] == '?') s[i] = s2[j++];
            else if (s[i] == s2[j]) j++;

            i++;
        }
        
        if (j == n) result = "YES";
        else result = "NO";

        for (int i = 0; i < s.size(); i++) if (s[i] == '?') s[i] = 'a';

        if (result == "YES") cout << "YES" << endl << s << endl;
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