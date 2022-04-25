#include <bits/stdc++.h>
using namespace std;

const long long INF = 1LL << 60;

void chmax(long long &a, int b)
{
    if (a < b)
    {
        a = b;
    }
}
int main()
{
    int N;
    cin >> N;
    vector<int> a(N);
    vector<int> b(N);
    vector<int> c(N);
    vector<vector<long long>> dp(3, vector<long long>(N + 1, -INF));
    vector<vector<int>> happiness(3, vector<int>(N));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> happiness[j][i];
        }
    }
    //初期条件
    for (int i = 0; i < 3; i++)
    {
        dp[i][0] = 0;
    }

    for (int i = 1; i < N + 1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (j == k)
                    continue;

                chmax(dp[j][i], dp[k][i - 1] + happiness[k][i - 1]);
            }
        }
    }
    long long result = 0;
    for (int i = 0; i < 3; i++)
    {
        chmax(result, dp[i][N]);
    }
    cout << result << endl;
}