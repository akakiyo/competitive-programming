#include <bits/stdc++.h>
using namespace std;

/*
vecotrの初期化について学習
*/
void learn_vecotr1()
{
    int N, M, C, count, sum;
    cin >> N >> M >> C;
    vector<int> B(M);                         // 1次元のvector宣言
    vector<vector<int>> A(N, vector<int>(M)); // 2次元のvector宣言
    for (int i = 0; i < M; i++)
    { // 1次元のvectorのループ分
        cin >> B[i];
    }
    for (int i = 0; i < N; i++)
    { // 2次元のvectorのループ分
        for (int j = 0; j < M; j++)
        {
            cin >> A[i][j];
        }
    }

    count = 0;
    for (int i = 0; i < N; i++)
    {
        sum = 0;
        for (int j = 0; j < M; j++)
        {
            sum += A[i][j] * B[j];
        }
        sum += C;
        if (sum > 0)
        {
            count++;
        }
    }
    cout << count << endl;
}
/*
vecotrのpairについて学習
*/
void learn_vecotr2()
{
    long int N, M;
    cin >> N >> M;
    vector<pair<long int, long int>> price_and_maxNum(N);
    int a, b;
    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;
        price_and_maxNum[i].first = a;
        price_and_maxNum[i].second = b;
    }

    // 昇順
    sort(price_and_maxNum.begin(), price_and_maxNum.end());
    //降順
    sort(price_and_maxNum.begin(), price_and_maxNum.end(), greater<int>());

    long int total_price = 0;
    for (int i = 0; i < N; i++)
    {
        long int m = min(price_and_maxNum[i].second, M);
        total_price += price_and_maxNum[i].first * m;
        M -= m;
        if (M == 0)
        {
            cout << total_price << endl;
            break;
        }
    }
}

void learn_vector_module()
{
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    //最大値のイテレータの取得
    auto b = max_element(a.begin(), a.end());
    //最大値のindexを取得
    int find_index = distance(a.begin(), b);
    //指定したindex(find_index)の値を削除
    a.erase(a.begin() + find_index);
}