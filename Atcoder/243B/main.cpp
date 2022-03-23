#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    int condition_1 = 0;
    int condition_2 = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (A[i] == B[i])
        {
            condition_1++;
        }
        auto result = find(B.begin(), B.end(), A[i]);
        if (result != B.end())
        {
            condition_2++;
        }
    }
    condition_2 -= condition_1;
    cout << condition_1 << endl;
    cout << condition_2 << endl;
    return 0;
}
