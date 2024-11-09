#include<bits/stdc++.h>
#define sorted(v) sort(v.begin(), v.end())
#define ll long long
#define loopI(i,n) for(int i = 0; i < n; i++)
#define loopD(i,n) for(int i = n - 1; i >= 0; i--)

using namespace std;

long long ceilDiv(long long a, long long b)
{
    return (a + b - 1) / b;
}
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int models, x;
        cin >> models >> x;

        vector<long long> cars(models);
        long long totalCars = 0, customers = 0;
        for(int i = 0; i < models; i++){
            long long car;
            cin >> car;
            totalCars += car;
            cars[i] = car;
        }

        long long maxCar = *max_element(cars.begin(), cars.end());
        customers = max(ceilDiv(totalCars, x), maxCar);
        cout << customers << endl;

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
