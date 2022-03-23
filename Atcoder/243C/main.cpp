#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> X(N);
    vector<int> Y(N);

    for (int i = 0; i < N; i++)
    {
        cin >> X[i] >> Y[i];
    }
    string S;
    cin >> S;
    bool conflict_flag = false;

    for (int i = 0; i < N; i++)
    {
        int find_index = 0;
        cout << find_index << endl;
        while (true)
        {
            auto result = Y[i:]
            cout << *result << endl;
            cout << *Y.end() << endl;
            if (result != Y.end())
            {
                find_index = distance(Y.begin(), result);
                // cout << "人" << i << " X:" << X[i] << " Y:" << Y[i] << " S:" << S[i] << endl;
                // cout << "人" << find_index << " X:" << X[find_index] << " Y:" << Y[find_index] << " S:" << S[find_index] << endl;
                if ((X[i] < X[find_index] && S[i] == 'R' && S[find_index] == 'L') || (X[i] > X[find_index] && S[i] == 'L' && S[find_index] == 'R'))
                {
                    conflict_flag = true;
                }
            }
        }
    }
    if (conflict_flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
