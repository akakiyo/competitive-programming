#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    int sum = 0;
    for (int i = 1; i < N + 1; i++)
    {
        int place_sum = 0;
        place_sum += (i / 10000) % 10;
        place_sum += (i / 1000) % 10;
        place_sum += (i / 100) % 10;
        place_sum += (i / 10) % 10;
        place_sum += (i / 1) % 10;
        if (A <= place_sum && place_sum <= B)
        {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}