#include <bits/stdc++.h>
using namespace std;

void chmax(long long &a, long long b)
{
    if (a < b)
    {
        a = b;
    }
}

int main()
{
    int N, W;
    cin >> N >> W;
    vector<int> weight(N);
    vector<long long> value(N);
    vector<vector<long long>> dp(N + 1, vector<long long>(W + 1, 0));
    for (int i = 0; i < N; i++)
    {
        cin >> weight[i] >> value[i];
    }
    for (int i = 0; i < N; i++)
    {
        for (int sum_w = 0; sum_w <= W; sum_w++)
        {
            if (sum_w - weight[i] >= 0)
            {
                chmax(dp[i + 1][sum_w], dp[i][sum_w - weight[i]] + value[i]);
            }
            chmax(dp[i + 1][sum_w], dp[i][sum_w]);
        }
    }
    cout << dp[N][W] << endl;

    return 0;
}
