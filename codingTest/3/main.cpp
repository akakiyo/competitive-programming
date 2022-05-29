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

int ctoi(char c)
{
    if (c >= '0' && c <= '9')
    {
        return c - '0';
    }
    return 0;
}

vector<string> split(const string &s, char delim)
{
    vector<string> elems;
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim))
    {
        if (!item.empty())
        {
            elems.push_back(item);
        }
    }
    return elems;
}
int main()
{
    V<string> input;
    while (!cin.eof())
    {
        string tmp;
        cin >> tmp;
        input.push_back(tmp);
    }
    input.erase(input.begin() + int(input.size()) - 1);
    int N = int(input.size());
    cout << input[N - 1] << endl;
    // int m = ctoi(*input[N - 1].c_str());
    int m;
    for (int i = 0; i < int(input[N - 1].size()); i++)
    {
        m = 10 * i * ctoi(*input[N - 1].c_str());
    }
    cout << m << endl;
    string ans = "";
    V<pair<int, string>> pair_num(N - 1);
    for (int i = 0; i < N - 1; i++)
    {
        vector<string> elems = split(input[i], ':');
        pair_num[i].first = ctoi(*elems[0].c_str());
        pair_num[i].second = elems[1];
    }
    for (int i = 0; i < N - 1; i++)
    {
        if (m % pair_num[i].first == 0)
        {
            ans += pair_num[i].second;
        }
    }
    // if (ans == "")
    // {
    //     cout << m << endl;
    // }
    // else
    // {
    //     cout << ans << endl;
    // }

    return 0;
}