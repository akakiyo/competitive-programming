#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }
    vector<pair<int, int>> dy_and_dx{make_pair(0, 1), make_pair(1, 1), make_pair(1, 0), make_pair(1, -1)};

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                int dy = dy_and_dx[k].first;
                int dx = dy_and_dx[k].second;
                int white_cnt = 0;
                for (int l = 0; l < 6; l++)
                {
                    int ny = i + dy * l;
                    int nx = j + dx * l;
                    if (ny < 0 || N <= ny || nx < 0 || N <= nx)
                    {
                        white_cnt = 10000;
                        break;
                    }
                    if (S[ny][nx] == '.')
                    {
                        white_cnt++;
                    }
                }
                if (white_cnt <= 2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
}