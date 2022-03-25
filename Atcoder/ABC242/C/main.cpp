#include <bits/stdc++.h>
#define mod 998244353
using namespace std;

int dp[1048576][10] = {0};

int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= 9; i++)
    {
        dp[1][i] = 1;
    }
    for (int d = 2; d < N + 1; d++)
    {
        for (int i = 1; i <= 9; i++)
        {
            for (int j = -1; j <= 1; j++)
            {
                if ((i == 1 && j == -1) || (i == 9 && j == 1))
                    continue;
                dp[d][i] += dp[d - 1][i + j];
                dp[d][i] %= mod;
            }
        }
    }
    // for (int i = 1; i < N + 1; i++)
    // {
    //     for (int j = 1; j < 10; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int ans = 0;
    for (int i = 1; i <= 9; i++)
    {
        ans += dp[N][i];
        ans %= mod;
    }
    cout << ans % mod << endl;

    return 0;
}
