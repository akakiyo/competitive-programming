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

int main()
{
    int N, W;
    cin >> N >> W;
    V<int> w(N);
    V<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> w[i] >> v[i];
    }
    V<V<ll>> dp(N + 1, V<ll>(W + 1, 0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (j - w[i] >= 0)
            {
                chmax(dp[i + 1][j], dp[i][j - w[i]] + v[i]);
            }
            chmax(dp[i + 1][j], dp[i][j]);
        }
    }
    cout << dp[N][W] << endl;
    return 0;
}