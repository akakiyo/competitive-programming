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
    int N;
    cin >> N;
    V<V<int>> happines(3, V<int>(N));
    V<int> b(N);
    V<int> c(N);
    for (int i = 0; i < N; i++)
    {
        cin >> happines[0][i] >> happines[1][i] >> happines[2][i];
    }
    V<V<ll>> dp(3, V<ll>(N + 1, 0));
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (j == k)
                    continue;
                chmax(dp[j][i + 1], (dp[k][i] + happines[k][i]));
            }
        }
    }
    ll result = 0;
    for (int i = 0; i < 3; i++)
    {
        chmax(result, dp[i][N]);
    }
    cout << result << endl;
    return 0;
}