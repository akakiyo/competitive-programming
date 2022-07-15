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
    int n = int(S.size());
    char privious_color = S[0];
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (privious_color != S[i])
        {
            count++;
            privious_color = S[i];
        }
    }
    cout << count << endl;
    return 0;
}