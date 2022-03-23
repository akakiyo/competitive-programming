#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int Y;
    cin >> N >> Y;

    for (int i = 0; i < N + 1; i++)
    {
        for (int j = 0; j < N + 1; j++)
        {
            // 10000円の札数と5000円の札数が決まった時点で1000円の札数は一意に定まる
            int k = N - (i + j);
            if (k < 0)
                continue;
            long long sum = i * 10000 + j * 5000 + k * 1000;
            if (sum == Y)
            {
                cout << i << " " << j << " " << k << endl;
                return 0;
            }
            // for (int k = 0; k < N + 1; k++)
            // {
            //     int bill_num = i + j + k;
            //     long long sum = i * 10000 + j * 5000 + k * 1000;

            //     if (bill_num == N && sum == Y)
            //     {
            //         cout << i << " " << j << " " << k << endl;
            //         return 0;
            //     }
            // }
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
    return 0;
}
