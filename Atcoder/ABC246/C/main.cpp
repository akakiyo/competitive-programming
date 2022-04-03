#include <bits/stdc++.h>
using namespace std;

int get_bill(vector<int> &A)
{
    int bill = 0;
    for (int i = 0; i < int(A.size()); i++)
    {
        bill += A[i];
    }
    return bill;
}

int main()
{
    int N;
    long long K, X;
    cin >> N >> K >> X;
    vector<long long> A(N);
    long long bill = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        bill += A[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (K == 0)
        {
            cout << bill << endl;
            return 0;
        }
        int used_coupon_num = A[i] / X;
        if (K < used_coupon_num)
        {
            used_coupon_num = K;
        }
        bill -= used_coupon_num * X;
        A[i] -= used_coupon_num * X;
        K -= used_coupon_num;
    }
    sort(A.begin(), A.end(), greater<int>());
    for (int i = 0; i < N; i++)
    {
        if (K == 0)
        {
            break;
        }
        K--;
        bill -= A[i];
    }
    cout << bill << endl;
    return 0;
}