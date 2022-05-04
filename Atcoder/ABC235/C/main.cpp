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
    int N, Q;
    cin >> N >> Q;
    V<ll> a(N);
    unordered_map<int, V<int>> reference_table;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        reference_table[a[i]].push_back(i + 1);
    }
    V<ll> x(Q);
    V<int> k(Q);
    for (int i = 0; i < Q; i++)
    {
        cin >> x[i] >> k[i];
    }
    for (int i = 0; i < Q; i++)
    {
        if (int(reference_table[x[i]].size()) < k[i])
        {
            cout << -1 << endl;
            continue;
        }
        cout << reference_table[x[i]][k[i] - 1] << endl;
    }

    return 0;
}