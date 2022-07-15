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
    V<string> S(N);
    V<ll> T(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i] >> T[i];
    }
    unordered_map<string, ll> points;
    unordered_map<string, int> index;
    for (int i = 0; i < N; i++)
    {
        if (points.count(S[i]) == 0)
        {
            points[S[i]] = T[i];
            index[S[i]] = i;
        }
    }
    ll max_point = 0;
    string max_point_poem;
    for (int i = 0; i < N; i++)
    {
        if (max_point < points[S[i]])
        {
            max_point = points[S[i]];
            max_point_poem = S[i];
        }
    }
    cout << index[max_point_poem] + 1 << endl;
    return 0;
}