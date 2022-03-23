#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> a(N);
    int score_difference = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < N; i++)
    {
        auto b = max_element(a.begin(), a.end());
        int find_index = distance(a.begin(), b);
        if (i % 2 == 0)
        {
            score_difference += a[find_index];
        }
        else
        {
            score_difference -= a[find_index];
        }
        a.erase(a.begin() + find_index);
    }

    cout << score_difference << endl;
    return 0;
}