#include <bits/stdc++.h>
using namespace std;

// 無限大の数
const long long INF = 1LL << 60;

bool chmin(long long &a, int b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}
int main()
{
    int N;
    cin >> N;
    vector<int> h(N);
    // DPテーブル
    long long dp[N];
    for (int i = 0; i < N; i++)
    {
        cin >> h[i];
        dp[i] = INF;
    }
    //初期条件
    dp[0] = 0;
    for (int i = 1; i < N; i++)
    {
        int count = 2;
        while (count > 0)
        {
            chmin(dp[i], abs(h[i - count] - h[i]) + dp[i - count]);
            count--;
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << dp[i] << " ";
    }
    cout << endl;
}