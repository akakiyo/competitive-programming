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
    int H, W;
    cin >> H >> W;
    V<V<ll>> A(H, V<ll>(W));
    V<V<ll>> B(W, V<ll>(H));
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < W; i++)
    {
        for (int j = 0; j < H; j++)
        {
            B[i][j] = A[j][i];
        }
    }
    for (int i = 0; i < W; i++)
    {
        for (int j = 0; j < H; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}