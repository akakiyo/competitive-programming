#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, C;
    cout << fixed << setprecision(11);
    cin >> a >> b >> C;
    double rad;
    rad = C * M_PI / 180;
    double ans = (1.0 / 2.0) * a * b * sin(rad);

    cout << ans << endl;
    double c;
    c = sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cos(rad));
    cout << fixed << setprecision(13);
    cout << a + b + c << endl;
    if (C == 90)
    {
        cout << b << endl;
    }
    else
    {
        cout << b * cos(rad) * tan(rad) << endl;
    }
    return 0;
}