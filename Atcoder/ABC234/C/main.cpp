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

string toBinary(ll n)
{
    string r;
    while (n != 0)
    {
        r += (n % 2 == 0 ? "0" : "1");
        n /= 2;
    }
    reverse(r.begin(), r.end());
    return r;
}
void output(string s)
{
    for (auto &nx : s)
    {
        if (nx == '1')
            cout << '2';
        else
            cout << '0';
    }
    cout << endl;
}

int main()
{
    ll K;
    cin >> K;
    output(toBinary(K));

    return 0;
}