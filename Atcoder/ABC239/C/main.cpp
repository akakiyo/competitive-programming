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
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    // V<pair<int, int>> coordinate;
    V<int> x;
    V<int> y;
    bool finded_flag = false;
    for (int i = -2; i <= 4; i++)
    {
        for (int j = -2; j <= 4; j++)
        {
            int dy1 = y1 + i;
            int dx1 = x1 + j;
            double distance1 = sqrt(pow(dy1 - y1, 2.0) + pow(dx1 - x1, 2.0));
            if (distance1 == sqrt(5))
            {
                y.push_back(dy1);
                x.push_back(dx1);
            }
        }
    }
    for (int i = -2; i <= 4; i++)
    {
        for (int j = -2; j <= 4; j++)
        {
            int dy2 = y2 + i;
            int dx2 = x2 + j;
            double distance2 = sqrt(pow(dy2 - y2, 2.0) + pow(dx2 - x2, 2.0));

            if (distance2 == sqrt(5))
            {
                for (int i = 0; i < int(y.size()); i++)
                {
                    if (y[i] == dy2 && x[i] == dx2)
                    {
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}