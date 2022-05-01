#include <bits/stdc++.h>
using namespace std;
template <class T>
bool chmin(T &a, const T &b) { return a > b ? a = b, true : false; }
template <class T>
bool chmax(T &a, const T &b) { return a < b ? a = b, true : false; }
template <class T>
using V = std::vector<T>;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;
const ll DIVIDED_NUM = 998244353;

int main()
{
    int N;
    cin >> N;
    V<V<ll>> dp(N, V<ll>(10, 0));
    for (int i = 1; i <= 9; i++)
    {
        dp[0][i] = 1;
    }
    for (int i = 1; i < N; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            for (int k = -1; k <= 1; k++)
            {
                if (j + k < 1 || 9 < j + k)
                    continue;
                dp[i][j] += dp[i - 1][j + k] % DIVIDED_NUM;
            }
        }
    }
    ll ans;
    for (int i = 1; i <= 9; i++)
    {
        ans += dp[N - 1][i] % DIVIDED_NUM;
    }
    cout << ans % DIVIDED_NUM << endl;
    return 0;
}