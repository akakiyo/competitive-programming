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
    int N, X;
    cin >> N >> X;
    vector<int> a(N);
    vector<int> b(N);
    vector<vector<bool>> dp(N + 1, vector<bool>(X + 1, false));
    for (int i = 0; i < N; i++)
    {
        cin >> a[i] >> b[i];
    }
    dp[0][0] = true;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= X; j++)
        {
            if (!dp[i][j])
                continue;
            if (j + a[i] <= X)
            {
                dp[i + 1][j + a[i]] = true;
            }
            if (j + b[i] <= X)
            {
                dp[i + 1][j + b[i]] = true;
            }
        }
    }

    // for (int i = 0; i <= N; i++)
    // {
    //     for (int j = 0; j <= X; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    if (dp[N][X])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}