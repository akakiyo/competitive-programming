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
    int R, C, sy, sx, gy, gx;
    cin >> R >> C;
    cin >> sy >> sx;
    cin >> gy >> gx;
    V<V<char>> c(R + 1, V<char>(C + 1));
    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= C; j++)
        {
            cin >> c[i][j];
        }
    }
    V<V<int>> distance(R + 1, V<int>(C + 1, inf));
    queue<pair<int, int>> q;
    q.push(make_pair(sy, sx));
    //初期状態からの距離を0に設定
    distance[sy][sx] = 0;
    //移動4方向のベクトル
    V<pair<int, int>> dy_dx{make_pair(1, 0), make_pair(0, 1), make_pair(-1, 0), make_pair(0, -1)};
    while (!q.empty())
    {
        //現在地
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            //移動した後の点を(ny,nx)とする
            int ny = y + dy_dx[i].first;
            int nx = x + dy_dx[i].second;

            //移動が可能かの判断と既に訪れたことがあるかの判定
            if (1 <= ny && ny <= R && 1 <= nx && nx <= C && c[ny][nx] != '#' && distance[ny][nx] == inf)
            {
                q.push(make_pair(ny, nx));             //次の位置をqueueに入れる
                distance[ny][nx] = distance[y][x] + 1; //点の距離をnowから+1の距離で確定する
            }
        }
    }
    cout << distance[gy][gx] << endl;
    return 0;
}
