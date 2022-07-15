// #include <bits/stdc++.h>
// using namespace std;
// template <class T>
// bool chmin(T &a, const T &b) { return a > b ? a = b, true : false; }
// template <class T>
// bool chmax(T &a, const T &b) { return a < b ? a = b, true : false; }
// template <class T>
// using V = std::vector<T>;
// typedef long long ll;
// const int inf = INT_MAX / 2;
// const ll infl = 1LL << 60;

// int main()
// {
//     int N;
//     cin >> N;
//     V<int> p(N);
//     V<int> ans;
//     for (int i = 0; i < N; i++)
//     {
//         cin >> p[i];
//     }

//     auto sum = accumulate(p.begin(), p.end(), 0);
//     V<V<int>> dp(N + 1, V<int>(sum + 1, 0));
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < sum + 1; j++)
//         {
//             if (j - p[i] >= 0)
//             {
//                 chmax(dp[i + 1][j], dp[i][j - p[i]] + p[i]);
//             }
//             chmax(dp[i + 1][j], dp[i][j]);
//             auto result = find(ans.begin(), ans.end(), dp[i + 1][j]);
//             if (result == ans.end())
//             {
//                 ans.push_back(dp[i + 1][j]);
//             }
//         }
//     }

//     cout << ans.size() << endl;
//     return 0;
// }

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
    V<int> p(N);
    V<int> ans;
    for (int i = 0; i < N; i++)
    {
        cin >> p[i];
    }
    auto sum = accumulate(p.begin(), p.end(), 0);
    V<V<bool>> dp(N + 1, V<bool>(sum + 1, false));
    dp[0][0] = true;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            dp[i + 1][j] = dp[i][j];
            if (j - p[i] >= 0 && dp[i][j - p[i]])
            {
                dp[i + 1][j] = true;
            }
        }
    }
    int n_count = count(dp[N].begin(), dp[N].end(), true);
    cout << n_count << endl;
    return 0;
}