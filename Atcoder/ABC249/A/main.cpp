#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C, D, E, F, X;
    cin >> A >> B >> C >> D >> E >> F >> X;
    int takahashiX = X, aokiX = X;
    int takahashiDis = 0;
    int aokiDis = 0;
    while (true)
    {
        if (takahashiX <= 0 && aokiX <= 0)
        {
            break;
        }
        if (takahashiX > 0)
        {
            takahashiX -= A;
            if (takahashiX < 0)
            {
                takahashiDis += (A + takahashiX) * B;
            }
            else
            {
                takahashiDis += A * B;
            }
            takahashiX -= C;
        }
        if (aokiX > 0)
        {
            aokiX -= D;
            if (aokiX < 0)
            {
                aokiDis += (D + aokiX) * E;
            }
            else
            {
                aokiDis += D * E;
            }
            aokiX -= F;
        }
    }

    if (takahashiDis > aokiDis)
    {
        cout << "Takahashi" << endl;
    }
    else if (takahashiDis < aokiDis)
    {
        cout << "Aoki" << endl;
    }
    else
    {
        cout << "Draw" << endl;
    }
    return 0;
}