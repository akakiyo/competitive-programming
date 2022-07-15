// #include <bits/stdc++.h>
// using namespace std;

// const long long INF = 1LL << 60;

// void chmin(long long &a, int b)
// {
//     if (a > b)
//     {
//         a = b;
//     }
// }
// int main()
// {
//     int N;
//     cin >> N;
//     vector<int> a(N);
//     vector<long long> dp(N, INF);
//     dp[0] = 0;
//     for (int i = 0; i < N; i++)
//     {
//         cin >> a[i];
//     }

//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 1; j <= 2; j++)
//         {
//             if (i - j < 0)
//             {
//                 continue;
//             }
//             chmin(dp[i], abs(a[i] - a[i - j]) + dp[i - j]);
//         }
//     }
//     cout << dp[N - 1] << endl;
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
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    vector<int> dp(N, inf);
    dp[0] = 0;
    for (int i = 0; i <= N; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            if (i - j < 0)
                continue;
            chmin(dp[i], abs(a[i] - a[i - j]) + dp[i - j]);
        }
    }

    cout << dp[N - 1] << endl;
    return 0;
}