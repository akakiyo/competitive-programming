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
    string s;
    cin >> s;
    int front_count = 0;
    int n = int(s.size());
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {

            front_count++;
        }
        else
        {
            break;
        }
    }
    if (front_count == n)
    {
        cout << "Yes" << endl;
        return 0;
    }
    int back_count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'a')
        {
            back_count++;
        }
        else
        {
            break;
        }
    }
    if (back_count < front_count)
    {
        cout << "No" << endl;
        return 0;
    }
    string sub = s.substr(front_count, n - front_count - back_count);
    if (sub == string(sub.rbegin(), sub.rend()))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}