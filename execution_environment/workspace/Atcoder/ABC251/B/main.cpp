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
    int N, W;
    cin >> N >> W;
    V<int> A;
    unordered_map<int, int> num_count;

    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        if (num_count.count(tmp) == 0)
        {
            num_count[tmp] = 1;
            A.push_back(tmp);
        }
        else
        {
            num_count[tmp]++;
        }
    }
    int A_length = int(A.size());
    int count = 0;

    for (int i = 0; i < A_length; i++)
    {
        if (A[i] <= W)
        {
            cout << "-------------" << endl;
            cout << "A[i]" << A[i] << endl;
            cout << "-------------" << endl;
            count++;
        }
    }
    // cout << count << endl;
    for (int i = 0; i < A_length; i++)
    {
        for (int j = i; j < A_length; j++)
        {
            if (A[i] == A[j] && num_count[A[i]] < 2)
            {
                continue;
            }
            if ((A[i] + A[j]) <= W)
            {
                cout << "-------------" << endl;
                cout << "A[i]" << A[i] << endl;
                cout << "A[j]" << A[j] << endl;
                cout << "-------------" << endl;
                count++;
            }
        }
    }
    // cout << count << endl;
    for (int i = 0; i < A_length; i++)
    {
        for (int j = i; j < A_length; j++)
        {
            if (A[i] == A[j] && num_count[A[i]] < 2)
            {
                continue;
            }
            for (int k = j; k < A_length; k++)
            {
                if (A[j] == A[k] && num_count[A[j]] < 2)
                {
                    continue;
                }
                if (A[i] == A[j] && A[i] == A[k] && A[j] == A[k] && num_count[A[i]] < 3)
                {
                    continue;
                }
                if ((A[i] + A[j] + A[k]) <= W)
                {
                    cout << "-------------" << endl;
                    cout << "A[i]" << A[i] << endl;
                    cout << "A[j]" << A[j] << endl;
                    cout << "A[k]" << A[k] << endl;
                    cout << "-------------" << endl;
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}