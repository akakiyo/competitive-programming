#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end());

    A.erase(unique(A.begin(), A.end()), A.end());
    int min_num = -1;
    for (int i = 0; i < int(A.size()); i++)
    {
        if (i != A[i])
        {
            min_num = i;
            break;
        }
    }
    if (min_num != -1)
    {
        cout << min_num << endl;
    }
    else
    {
        cout << *max_element(A.begin(), A.end()) + 1 << endl;
    }
    return 0;
}