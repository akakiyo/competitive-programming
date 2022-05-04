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
    int N, M;
    cin >> N >> M;
    V<string> S(N);
    V<string> T(M);
    unordered_map<string, bool> is_express;
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
        is_express[S[i]] = false;
    }
    for (int i = 0; i < M; i++)
    {
        cin >> T[i];
        is_express[T[i]] = true;
    }

    for (int i = 0; i < N; i++)
    {
        if (is_express[S[i]])
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}