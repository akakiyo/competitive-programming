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

int memo[101010];
int get_payment_num(int num)
{
    if (num == 0)
        return 0;
    if (memo[num])
        return memo[num];
    int ans = inf;

    chmin(ans, get_payment_num(num - 1) + 1);
    int x = 6;
    while (x <= num)
    {
        chmin(ans, get_payment_num(num - x) + 1);
        x *= 6;
    }
    x = 9;
    while (x <= num)
    {
        chmin(ans, get_payment_num(num - x) + 1);
        x *= 9;
    }
    memo[num] = ans;
    return ans;
}

int main()
{
    int N;
    cin >> N;
    cout << get_payment_num(N) << endl;
}