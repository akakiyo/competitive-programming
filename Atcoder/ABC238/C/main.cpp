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
const long long MOD = 998244353;

ll caluculate_sum(ll x)
{
    x %= MOD;
    return x * (x + 1) / 2;
}
int main()
{
    ll N;
    cin >> N;
    ll res = 0;
    ll p10 = 10;
    // xに取得したい桁数の数値を入れる
    int digit_num = int(to_string(N).size());
    for (int i = 1; i <= digit_num; i++)
    {
        ll under_limit = p10 / 10;
        ll upper_limit = min(p10 - 1, N);

        res += caluculate_sum(upper_limit - under_limit + 1);
        res %= MOD;
        p10 *= 10;
    }
    cout << res << endl;
    return 0;
}
