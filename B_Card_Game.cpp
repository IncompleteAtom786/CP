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

int compare(int& a, int& b)
{
    if(a > b) return 1;
    else if(a == b) return 0;
    else return -1;
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int result = 0;
        int w1, w2, l1, l2;
        cin >> w1 >> w2 >> l1 >> l2;

        if(compare(w1, l1) + compare(w2, l2) > 0) result++;
        if(compare(w1, l2) + compare(w2, l1) > 0) result++;
        if(compare(w2, l1) + compare(w1, l2) > 0) result++;
        if(compare(w2, l2) + compare(w1, l1) > 0) result++;

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