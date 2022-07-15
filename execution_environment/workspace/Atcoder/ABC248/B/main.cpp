#include <bits/stdc++.h>
using namespace std;

int main()
{

    int A, B, K;
    cin >> A >> B >> K;

    int yell_count = 0;
    long long slime_num = A;
    while (true)
    {
        if (slime_num >= B)
        {
            break;
        }
        yell_count++;
        slime_num *= K;
    }

    cout << yell_count << endl;

    return 0;
}