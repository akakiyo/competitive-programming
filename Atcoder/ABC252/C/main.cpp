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

int ctoi(char c)
{
    if (c >= '0' && c <= '9')
    {
        return c - '0';
    }
    return 0;
}

int main()
{

    int N;
    cin >> N;
    V<string> S(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }
    V<vector<int>> dp(N, vector<int>(10, 0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            int num = ctoi(S[i][j]);
            dp[i][num] = j;
        }
    }
    V<int> max_list(10);
    for (int i = 0; i < 10; i++)
    {
        unordered_map<int, int> ans;
        for (int j = 0; j < N; j++)
        {
            if (ans.count(dp[j][i]) == 0)
            {
                ans[dp[j][i]] = dp[j][i];
            }
            else
            {
                ans[dp[j][i]] += 10;
            }
        }
        int max = -inf;
        for (auto a : ans)
        {
            chmax(max, a.second);
        }
        max_list[i] = max;
    }
    auto min = min_element(max_list.begin(), max_list.end());
    cout << *min << endl;
    return 0;
}