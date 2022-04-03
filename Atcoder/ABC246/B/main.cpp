#include <bits/stdc++.h>
using namespace std;

int main()
{
    double A, B;
    cin >> A >> B;

    double line_segment = sqrt(pow(A - 0, 2) + pow(B - 0, 2));
    double moved_x = A / line_segment;
    double moved_y = B / line_segment;

    cout << fixed << setprecision(12) << endl;
    cout << moved_x << " " << moved_y << endl;
    return 0;
}