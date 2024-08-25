#include <bits/stdc++.h>
using namespace std;
void hehehe()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    string s;
    cin >> s;

    vector<long long> pref(n + 1);
    for (int i = 0; i < n; i++) pref[i + 1] = pref[i] + a[i];

    vector<int> ll, rr;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L') ll.push_back(i);
        else rr.push_back(i);
    }

    reverse(ll.begin(), ll.end());
    long long ans = 0;
    while (ll.size() && rr.size() && ll.back() <= rr.back())
    {
        ans += pref[rr.back() + 1] - pref[ll.back()];
        ll.pop_back();
        rr.pop_back();
    }
    cout << ans << "\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        hehehe();
    }
}