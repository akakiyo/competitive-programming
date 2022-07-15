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
    char route_name;
    string station_name;
    char direction;
    string times_of_day;
    cin >> route_name >> station_name >> direction >> times_of_day;
    // V<V<string>> A(13);
    V<string> A(14);
    V<V<V<int>>> A_record(14, V<V<int>>(24));

    int A1_departure_interval = 5;
    V<int> move_time_list = {0, 3, 5, 2, 3, 4, 3, 4, 2, 2, 3, 6, 2};
    int h_1 = 5, m_1 = 55;
    for (int i = 0; i < int(move_time_list.size()); i++)
    {
        m_1 += move_time_list[i];
        if (m_1 >= 60)
        {
            h_1 += 1;
            m_1 = m_1 % 60;
        }
        // cout << h_1 << ":" << m_1 << endl;
        A_record[i + 1][h_1].push_back(m_1);
    }
    for (int i = 1; i < int(A_record.size()); i++)
    {
        for (int j = 5; j < 7; j++)
        {
            cout << j << ":" << endl;
            for (int k = 0; k < int(A_record[i][j].size()); k++)
            {

                cout << A_record[i][j][k] << " ";
            }
        }
        cout << endl;
    }
    int h = 5, m = 55;
    while (true)
    {
        for (int i = 0; i < int(move_time_list.size()); i++)
        {
            
        }
        // if (A1_departure_interval == 0)
        // {
        //     A[0] = h + ":" + m;
        //     A1_departure_interval = 5;
        // }
        if (m == 60)
        {
            h += 1;
            m = m % 60;
        }
        if (h == 23)
        {
            break;
        }

        m += 5;
        // A1_departure_interval -= 1;
    }
    // cout << "No train" << endl;

    return 0;
}