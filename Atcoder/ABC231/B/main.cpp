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
    V<string> candidates(N);
    for (int i = 0; i < N; i++)
    {
        cin >> candidates[i];
    }
    unordered_map<string, int> vote_num;
    for (int i = 0; i < N; i++)
    {
        if (vote_num.count(candidates[i]) == 0)
        {
            vote_num[candidates[i]] = 0;
        }
        else
        {
            vote_num[candidates[i]]++;
        }
    }
    string max_candidate = "";
    int max_votes = -inf;
    for (auto v : vote_num)
    {
        if (max_votes < v.second)
        {
            max_candidate = v.first;
            max_votes = v.second;
        }
    }
    cout << max_candidate << endl;
    return 0;
}