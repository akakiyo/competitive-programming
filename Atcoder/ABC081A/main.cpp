#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s;
    int s1, s2, s3;
    cin >> s;

    s1 = (s / 100) % 10;
    s2 = (s / 10) % 10;
    s3 = (s / 1) % 10;
    int sum = s1 + s2 + s3;

    cout << sum << endl;

    return 0;
}