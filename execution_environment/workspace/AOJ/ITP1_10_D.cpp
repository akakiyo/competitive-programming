#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<double> x(n);
    vector<double> y(n);
    cout << fixed << setprecision(6);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> y[i];
    }
    double manhattan_distance = 0;
    double euclidean_distance = 0;
    double where_p_3 = 0;
    double chebyshev_distance = 0;
    for (int i = 0; i < n; i++)
    {
        manhattan_distance += abs(x[i] - y[i]);
        euclidean_distance += pow((abs(x[i] - y[i])), 2);
        where_p_3 += pow((abs(x[i] - y[i])), 3);
        if (chebyshev_distance < (abs(x[i] - y[i])))
        {
            chebyshev_distance = abs(x[i] - y[i]);
        }
    }
    euclidean_distance = sqrt(euclidean_distance);
    where_p_3 = cbrt(where_p_3);
    cout << manhattan_distance << endl;
    cout << euclidean_distance << endl;
    cout << where_p_3 << endl;
    cout << chebyshev_distance << endl;
    return 0;
}
