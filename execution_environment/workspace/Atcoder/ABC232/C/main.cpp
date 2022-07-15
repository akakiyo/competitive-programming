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
    V<V<bool>> X(N, V<bool>(N, false));
    V<V<bool>> Y(N, V<bool>(N, false));
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        a -= 1, b -= 1;
        X[a][b] = X[b][a] = true;
    }
    for (int i = 0; i < M; i++)
    {
        int c, d;
        cin >> c >> d;
        c -= 1, d -= 1;
        Y[c][d] = Y[d][c] = true;
    }

    V<int> P(N);
    iota(P.begin(), P.end(), 0); // Pに0から順番にインクリメントした数字を格納していく

    // do whileにしないと一番最初の0,1,2,3...が実行されない
    do
    {
        for (int i = 0; i < N; i++)
        {
            cout << P[i] << " ";
        }
        cout << endl;
        bool ok = true;
        for (int i = 0; i < N; ++i)
        {
            for (int j = 0; j < N; ++j)
            {
                if (X[i][j] != Y[P[i]][P[j]])
                {
                    ok = false;
                }
            }
        }
        if (ok)
        {
            cout << "Yes" << endl;
            return 0;
        }
    } while (next_permutation(P.begin(), P.end()));

    cout << "No" << endl;

    return 0;
}