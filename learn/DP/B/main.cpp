#include <bits/stdc++.h>
using namespace std;

const long long INF = 1LL << 60;

void chmin(int &a, int b)
{
    if (a > b)
    {
        a = b;
    }
}

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> h(N);
    vector<int> dp(N, INF);
    //初期条件
    dp[0] = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> h[i];
    }
    for (int i = 1; i < N; i++)
    {
        for (int j = i - K; j < i; i++)
        {
            if (j < 0)
            {
                continue;
            }
            chmin(dp[i], dp[j] + abs(dp[i] - dp[j]));
        }
    }
    cout << dp[N - 1] << endl;
}