#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> t(N);
    vector<pair<int, int>> coordinate(N);
    vector<pair<int, int>> current_coorinate{{0, 0}};
    int current_time = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> t[i] >> coordinate[i].first >> coordinate[i].second;
    }
    bool can_travel = true;

    for (int i = 0; i < N; i++)
    {
        int distance_x = abs(current_coorinate[0].first - coordinate[i].first);
        int distance_y = abs(current_coorinate[0].second - coordinate[i].second);
        int distance = distance_x + distance_y;
        // cout << "------------------------------" << endl;
        // cout << "distance：" << distance << endl;
        // cout << "t[i] - current_time：" << t[i] - current_time << endl;
        // cout << "x：" << coordinate[i].first << " y；" << coordinate[i].second << endl;
        // cout << "current_x：" << current_coorinate[0].first << " current_y；" << current_coorinate[0].second << endl;
        // cout << "------------------------------" << endl;
        int travel_time = t[i] - current_time;

        bool can = (travel_time % 2 == distance % 2);
        if (distance <= travel_time && can)
        {
            current_time = t[i];
            current_coorinate[0].first = coordinate[i].first;
            current_coorinate[0].second = coordinate[i].second;
        }
        else
        {
            can_travel = false;
            break;
        }
    }
    if (can_travel)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}