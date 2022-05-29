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
    string S;
    cin >> S;
    string ans;
    while (true)
    {
        if (int(ans.size()) == 6)
        {
            cout << ans << endl;
            return 0;
        }
        ans += S;
    }
    return 0;
}