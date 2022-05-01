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
    vector<pair<int, int>> xy(N);
    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        xy[i] = make_pair(x, y);
    }
    string S;
    cin >> S;

    unordered_map<int, int> go_R;
    unordered_map<int, int> go_L;
    bool conflict = false;

    for (int i = 0; i < N; i++)
    {
        int x = xy[i].first, y = xy[i].second;
        if (S[i] == 'R')
        {
            if (go_R.count(y) == 0)
            {
                go_R[y] = x;
            }
            else
            {
                if (x < go_R[y])
                {
                    go_R[y] = x;
                }
            }
        }
        else
        {
            if (go_L.count(y) == 0)
            {
                go_L[y] = x;
            }
            else
            {
                if (x > go_L[y])
                {
                    go_L[y] = x;
                }
            }
        }
        if (go_R.count(y) != 0 && go_L.count(y) != 0 && go_R[y] < go_L[y])
        {
            conflict = true;
            break;
        }
    }
    if (conflict)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}