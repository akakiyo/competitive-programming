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

ll ans = 0;
int N;
ll X;
void dfs(ll pos, ll product_sum, V<V<ll>> &a)
{
    if (pos == N)
    {
        if (product_sum == X)
            ans++;
        return;
    }
    for (ll c : a[pos])
    {
        if (product_sum * c > X)
            continue;
        dfs(pos + 1, product_sum * c, a);
    }
}

int main()
{

    cin >> N >> X;
    V<int> L(N);
    V<V<ll>> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> L[i];
        for (int j = 0; j < L[i]; j++)
        {
            int tmp;
            cin >> tmp;
            a[i].push_back(tmp);
        }
    }

    dfs(0, 1, a);
    cout << ans << endl;
    return 0;
}