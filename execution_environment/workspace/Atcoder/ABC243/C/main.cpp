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
    V<pair<int, int>> X_and_Y(N);
    string s;
    for (int i = 0; i < N; i++)
    {
        cin >> X_and_Y[i].first >> X_and_Y[i].second;
    }
    cin >> s;
    unordered_map<int, int> go_R;
    unordered_map<int, int> go_L;

    for (int i = 0; i < N; i++)
    {
        int x = X_and_Y[i].first, y = X_and_Y[i].second;
        if (s[i] == 'R')
        {
            if (go_R.count(y) == 0)
            {
                go_R[y] = x;
            }
            else
            {
                if (go_R[y] > x)
                {
                    go_R[y] = x;
                }
            }
        }
        else if (s[i] == 'L')
        {
            if (go_L.count(y) == 0)
            {
                go_L[y] = x;
            }
            else
            {
                if (go_L[y] < x)
                {
                    go_L[y] = x;
                }
            }
        }
        else
        {
            cout << "想定外" << endl;
        }
        if (go_L.count(y) != 0 && go_R.count(y) != 0 && (go_R[y] < go_L[y]))
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}