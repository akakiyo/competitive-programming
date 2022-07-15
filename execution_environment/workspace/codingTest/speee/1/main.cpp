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
    int A, B;
    cin >> A >> B;
    int profit_per_person;
    profit_per_person = A / B;
    int leftover_money = A % B;
    profit_per_person += (leftover_money * 100) / B;

    cout << profit_per_person << endl;
    return 0;
}