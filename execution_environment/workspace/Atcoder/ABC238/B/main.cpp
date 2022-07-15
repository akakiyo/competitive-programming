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
    V<int> A(N);
    V<int> angle;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < int(angle.size()); j++)
        {
            angle[j] += A[i];
            if (angle[j] >= 360)
            {
                angle[j] %= 360;
            }
        }
        angle.push_back(A[i]);
    }
    angle.push_back(0);
    angle.push_back(360);
    sort(angle.begin(), angle.end());
    int res = 0;
    for (int i = 0; i < N + 2; i++)
    {

        if (res < angle[i + 1] - angle[i])
        {
            res = angle[i + 1] - angle[i];
        }
    }
    cout << res << endl;

    return 0;
}