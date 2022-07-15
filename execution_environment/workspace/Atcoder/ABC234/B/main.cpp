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
    cout << fixed << setprecision(10);
    int N;
    cin >> N;
    V<pair<double, double>> x_y(N);
    for (int i = 0; i < N; i++)
    {
        cin >> x_y[i].first >> x_y[i].second;
    }
    double max_line_segment = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            double line_segment = sqrt(pow(x_y[i].first - x_y[j].first, 2.0) + pow(x_y[i].second - x_y[j].second, 2.0));
            if (max_line_segment < line_segment)
            {
                max_line_segment = line_segment;
            }
        }
    }
    cout << max_line_segment << endl;
    return 0;
}