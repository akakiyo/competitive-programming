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
    int W, N, K;
    cin >> W;
    cin >> N >> K;
    V<int> A(N);
    V<int> B(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i] >> B[i];
    }
    V<V<V<int>>> dp(N + 1, V<V<int>>(K + 1, V<int>(W + 1, 0)));
    for (int i = 0; i < N; i++)
    {
        for (int past_num = 0; past_num < K; past_num++)
        {
            for (int total_width = 0; total_width < W; total_width++)
            {
                int w = total_width + A[i];
                if (w > W) //ソフト幅を超えた
                    break;
                chmax(dp[i + 1][past_num + 1][w], dp[i][past_num][total_width] + B[i]);
            }
        }
    }
    int best = 0;
    for (int i = 0; i <= K; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            chmax(best, dp[N][i][j]);
        }
    }
    cout << best << endl;
    return 0;
}