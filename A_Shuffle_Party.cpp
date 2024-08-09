#include<bits/stdc++.h>
using namespace std;

// int bigDivisor(int dividend)
// {
//     int i = (dividend / 2);
//     while(i > 0) 
//     {
//         if(dividend % i == 0) return i;
//         i--;
//     }
    
//     return 1;
// }

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int N, result = 1, i = 0;
        cin >> N;
        while(result * 2 <= N)
        {
            result = 2 * result;
        }
        cout << result << endl;

        // vector<int> vec;
        // for (int i = 1; i <= N; i++) vec.push_back(i);

        // for (auto &num : vec) 
        // {
        //     int k = num, d = bigDivisor(num);
        //     swap(vec[k - 1], vec[d - 1]);
        // }

        // for (int i = 0; i < vec.size(); i++) if(vec[i] == 1) cout << i + 1;
        // cout << endl;

    }
}