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
    V<string> S(H);
    for (int i = 0; i < H; i++)
    {
        cin >> S[i];
    }

    int s_x, s_y, e_x, e_y;
    int count = 0;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (S[i][j] == 'o')
            {
                if (count == 0)
                {
                    s_x = i;
                    s_y = j;
                    count++;
                }
                else
                {
                    e_x = i;
                    e_y = j;
                }
            }
        }
    }
    // cout << "s_x" << s_x << " "
    //      << "s_y" << s_y << endl;
    // cout << "e_x" << e_x << " "
    //      << "e_y" << e_y << endl;
    int x_difference = abs(s_x - e_x);
    int y_difference = abs(s_y - e_y);
    cout << x_difference + y_difference << endl;
    return 0;
}