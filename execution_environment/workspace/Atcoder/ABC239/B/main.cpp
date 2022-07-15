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
    ll X;
    cin >> X;
    ll x = X / 10;
    if (X > 0 || X % 10 == 0)
    {

        cout << X / 10 << endl;
    }
    else
    {
        cout << X / 10 - 1 << endl;
    }
    return 0;
}