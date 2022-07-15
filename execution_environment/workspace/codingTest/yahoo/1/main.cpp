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
    ll n;
    int a, b;
    cin >> a >> b >> n;
    ll expectedDate = n % a;
    // xに取得したい桁数の数値を入れる
    int digit_num = int(to_string(n).size());
    for (int i = 0; i < n; i++)
    {
    }
    return 0;
}