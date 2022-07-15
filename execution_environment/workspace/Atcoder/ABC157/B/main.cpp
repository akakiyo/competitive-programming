// #include <bits/stdc++.h>
// using namespace std;
// template <class T>
// bool chmin(T &a, const T &b) { return a > b ? a = b, true : false; }
// template <class T>
// bool chmax(T &a, const T &b) { return a < b ? a = b, true : false; }
// template <class T>
// using V = std::vector<T>;
// typedef long long ll;
// const int inf = INT_MAX / 2;
// const ll infl = 1LL << 60;
// bool check_bingo(vector<vector<int>> &A)
// {
//     bool vertical_ok = false;
//     for (int i = 0; i < 3; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < 3; j++)
//         {
//             if (A[i][j] == 0)
//                 count++;
//         }
//         if (count == 3)
//         {
//             vertical_ok = true;
//             break;
//         }
//     }

//     bool horizontal_ok = false;
//     for (int i = 0; i < 3; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < 3; j++)
//         {
//             if (A[j][i] == 0)
//                 count++;
//         }
//         if (count == 3)
//         {
//             horizontal_ok = true;
//             break;
//         }
//     }
//     bool diagonal_ok = false;
//     for (int i = 0; i < 2; i++)
//     {
//         int n_count = 0;
//         if (i == 0)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 if (A[j][j] == 0)
//                     n_count++;
//             }
//         }
//         else if (i == 1)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 if (A[j][2 - j] == 0)
//                     n_count++;
//             }
//         }
//         if (n_count == 3)
//         {
//             diagonal_ok = true;
//             break;
//         }
//     }
//     return vertical_ok || horizontal_ok || diagonal_ok;
// }
// int main()
// {
//     V<V<int>> A(3, vector<int>(3));
//     for (int i = 0; i < 3; i++)
//     {
//         cin >> A[i][0] >> A[i][1] >> A[i][2];
//     }
//     int N;
//     cin >> N;
//     V<int> b(N);
//     for (int i = 0; i < N; i++)
//     {
//         cin >> b[i];
//     }

//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             auto result = find(A[j].begin(), A[j].end(), b[i]);
//             if (result != A[j].end())
//             {
//                 int find_index = distance(A[j].begin(), result);
//                 A[j][find_index] = 0;
//             }
//         }
//     }
//     if (check_bingo(A))
//     {
//         cout << "Yes" << endl;
//     }
//     else
//     {
//         cout << "No" << endl;
//     }

//     return 0;
// }

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

bool check_bingo(vector<vector<int>> &A)
{

    for (int i = 0; i < 3; i++)
    {
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            if (A[i][j] == 0)
            {
                count++;
            }
        }
        if (count == 3)
            return true;
    }

    for (int i = 0; i < 3; i++)
    {
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            if (A[j][i] == 0)
            {
                count++;
            }
        }
        if (count == 3)
            return true;
    }

    for (int i = 0; i < 2; i++)
    {
        int count = 0;
        if (i == 0)
        {
            for (int j = 0; j < 3; j++)
            {
                if (A[j][j] == 0)
                {
                    count++;
                }
            }
        }
        else
        {
            for (int j = 0; j < 3; j++)
            {
                if (A[j][2 - j] == 0)
                {
                    count++;
                }
            }
        }

        if (count == 3)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    V<V<int>> A(3, V<int>(3));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }
    int N;
    cin >> N;
    vector<int> b(N);
    for (int i = 0; i < N; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            auto result = find(A[j].begin(), A[j].end(), b[i]);
            if (result != A[j].end())
            {
                int find_index = distance(A[j].begin(), result);
                A[j][find_index] = 0;
            }
        }
    }
    if (check_bingo(A))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}