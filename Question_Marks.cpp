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
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
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
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a = 0, b = 0, c = 0, d = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
            {
                a++;
            }
            else if (s[i] == 'B')
            {
                b++;
            }
            else if (s[i] == 'C')
            {
                c++;
            }
            else if (s[i] == 'D')
            {
                d++;
            }
        }
        int ans = 0;
        if (a <= n)
        {
            ans += a;
        }
        else
        {
            ans += n;
        }
        if (b <= n)
        {
            ans += b;
        }
        else
        {
            ans += n;
        }
        if (c <= n)
        {
            ans += c;
        }
        else
        {
            ans += n;
        }
        if (d <= n)
        {
            ans += d;
        }
        else
        {
            ans += n;
        }
        cout << ans << endl;
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