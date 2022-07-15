#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int K;
    cin >> N >> K;
    vector<int> A(N);
    vector<int> B(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }
    // 数列Aの要素に対するフラグ
    vector<bool> flag_A(N);
    // 数列Bの要素に対するフラグ
    vector<bool> flag_B(N);
    flag_A[0] = true;
    flag_B[0] = true;

    for (int i = 1; i < N; i++)
    {
        // 1つ前のA要素が数列Xになるかどうかでフラグを立てる
        if (flag_A[i - 1])
        {
            if (abs(A[i - 1] - A[i]) <= K)
            {
                flag_A[i] = true;
            }
            if (abs(A[i - 1] - B[i]) <= K)
            {
                flag_B[i] = true;
            }
        }
        // 1つ前のB要素が数列Xの要素になりうる場合の処理
        if (flag_B[i - 1])
        {
            if (abs(B[i - 1] - A[i]) <= K)
            {
                flag_A[i] = true;
            }
            if (abs(B[i - 1] - B[i]) <= K)
            {
                flag_B[i] = true;
            }
        }
    }
    if (flag_A[N - 1] || flag_B[N - 1])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}