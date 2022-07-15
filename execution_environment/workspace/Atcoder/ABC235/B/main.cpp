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
    V<int> H(N);
    for (int i = 0; i < N; i++)
    {
        cin >> H[i];
    }
    int current_height = 0;
    for (int i = 0; i < N; i++)
    {
        if (current_height < H[i])
        {
            current_height = H[i];
        }
        else
        {
            break;
        }
    }
    cout << current_height << endl;
    return 0;
}