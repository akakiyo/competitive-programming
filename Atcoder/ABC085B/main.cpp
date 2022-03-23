#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> d(N);
    for (int i = 0; i < N; i++)
    {
        cin >> d[i];
    }
    int previous_num = -1;
    int stage_num = 0;
    for (int i = 0; i < N; i++)
    {
        auto max_num_iter = max_element(d.begin(), d.end());

        if (*max_num_iter != previous_num)
        {
            stage_num++;
        }
        previous_num = *max_num_iter;
        int max_num_index = distance(d.begin(), max_num_iter);
        d.erase(d.begin() + max_num_index);
    }
    cout << stage_num << endl;

    return 0;
}