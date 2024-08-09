#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, i = 0;
        cin >> N;

        vector<int> vec(N, 0);
        while (N--)
            cin >> vec[i++];

        int result = 0;
        for (auto &num : vec)
            result |= num;

        cout << result << endl;
    }

    return 0;
}