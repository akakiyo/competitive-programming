#include <bits/stdc++.h>
using namespace std;

const long long INF = 1LL << 60;

void chmin(long long &a, int b)
{
    if (a > b)
    {
        a = b;
    }
}
int main()
{
    int N;
    cin >> N;
    vector<int> a(N);
    vector<long long> dp(N, INF);
    //初期条件
    dp[0] = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i < N; i++)
    {
        for (int j = i - 2; j < i; j++)
        {
            if (j < 0)
            {
                continue;
            }
            chmin(dp[i], abs(a[i] - a[j]) + dp[j]);
        }
    }
    cout << dp[N - 1] << endl;
}