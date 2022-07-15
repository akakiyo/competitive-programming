#include <bits/stdc++.h>
using namespace std;

int main()
{

    while (true)
    {
        int N;
        cin >> N;
        if (N == 0)
            break;
        vector<int> dp(N + 1, 0);
        dp[0] = 1;
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= 3; j++)
            {
                if (i - j < 0)
                    continue;
                dp[i] += dp[i - j];
            }
        }
        ////////////////////切り上げ
        int ans = dp[N] / 3650;
        if (dp[N] % 3650 > 0)
            ans++;
        ///////////////////
        cout << ans << endl;
    }
    return 0;
}