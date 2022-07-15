#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<string, string>> cards(n);
    vector<int> point(2, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> cards[i].first;
        cin >> cards[i].second;
    }
    for (int i = 0; i < n; i++)
    {
        if (cards[i].first == cards[i].second)
        {
            point[0]++;
            point[1]++;
        }
        else if (cards[i].first > cards[i].second)
        {
            point[0] += 3;
        }
        else
        {
            point[1] += 3;
        }
    }
    cout << point[0] << " " << point[1] << endl;
    return 0;
}