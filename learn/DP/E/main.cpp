#include <bits/stdc++.h>
using namespace std;
void chmin(long long &a, long long b)
{
    if (a > b)
    {
        a = b;
    }
}
const long long INF = 1LL << 60;

int main()
{
    int N;
    long long W;
    cin >> N >> W;
    vector<int> value(N);
    vector<int> weight(N);

    for (int i = 0; i < N; ++i)
        cin >> weight[i] >> value[i];

    int max_value = accumulate(value.begin(), value.end(), 0);
    vector<vector<long long>> dp(N + 1, vector<long long>(max_value + 1, INF));
    // 初期条件
    dp[0][0] = 0;

    // DPループ
    for (int i = 0; i < N; ++i)
    {
        for (int sum_v = 0; sum_v <= max_value; ++sum_v)
        {

            // i 番目の品物を選ぶ場合
            if (sum_v - value[i] >= 0)
                chmin(dp[i + 1][sum_v], dp[i][sum_v - value[i]] + weight[i]);

            // i 番目の品物を選ばない場合
            chmin(dp[i + 1][sum_v], dp[i][sum_v]);
        }
    }
    // 最適値の出力
    long long res = 0;
    for (int sum_v = 0; sum_v <= max_value; ++sum_v)
    {
        if (dp[N][sum_v] <= W)
            res = sum_v;
    }
    cout << res << endl;
}