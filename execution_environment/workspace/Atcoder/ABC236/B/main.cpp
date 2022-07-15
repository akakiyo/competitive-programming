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
    V<int> A(4 * N - 1);
    for (int i = 0; i < 4 * N - 1; i++)
    {
        cin >> A[i];
    }
    unordered_map<int, int> a;
    for (int i = 0; i < 4 * N - 1; i++)
    {
        if (a.count(A[i]) == 0)
        {
            a[A[i]] = 0;
        }
        a[A[i]] += 1;
    }
    for (int i = 1; i <= N; i++)
    {
        if (a[i] != 4)
        {
            cout << i << endl;
        }
    }
    return 0;
}