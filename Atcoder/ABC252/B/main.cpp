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
    int N, K;
    cin >> N >> K;
    V<int> A(N);
    V<int> B(K);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < K; i++)
    {
        cin >> B[i];
    }
    auto b = max_element(A.begin(), A.end());
    int max_num = *b;
    for (int i = 0; i < K; i++)
    {
        if (A[B[i] - 1] == max_num)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}