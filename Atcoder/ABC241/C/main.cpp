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

vector<pair<int, int>> dy_and_dx{make_pair(0, 1), make_pair(1, 1), make_pair(1, 0), make_pair(1, -1)};
int main()
{
    int N;
    cin >> N;
    V<string> S(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                int dy = i;
                int dx = j;
                int white_count = 2;
                for (int l = 0; l < 6; l++)
                {
                    if (dy < 0 || N <= dy || dx < 0 || N <= dx)
                    {
                        white_count = -1;
                        break;
                    }

                    if (S[dy][dx] == '.')
                    {
                        white_count--;
                    }
                    dy += dy_and_dx[k].first;
                    dx += dy_and_dx[k].second;
                }
                if (white_count >= 0)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}