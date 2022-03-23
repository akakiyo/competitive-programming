#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double ans;
    ans = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    std::cout << std::fixed << setprecision(8) << endl;
    cout << ans << endl;
    return 0;
}