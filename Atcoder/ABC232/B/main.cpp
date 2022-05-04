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
    string S, T;
    cin >> S;
    cin >> T;
    int a = T[0] - S[0];
    if (a < 0)
    {
        a = 'z' - S[0] + T[0] + 1 - 'a';
    }
    for (int i = 1; i < int(S.size()); i++)
    {
        int tmp = a;
        if (S[i] + tmp > 122)
        {
            tmp = tmp - ('z' - S[i]) - 1;
            if (char('a' + tmp) == T[i])
            {
                continue;
            }
            else
            {
                cout << "No" << endl;
                return 0;
            }
        }
        else if (char(S[i] + tmp) == T[i])
        {
            continue;
        }
        else
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}