#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string T;
    cin >> N;
    cin >> T;

    int direction = 0; // 0:東,1:南,2:西,3:北
    int x = 0, y = 0;
    for (int i = 0; i < N; i++)
    {
        if (T[i] == 'S')
        {
            switch (direction)
            {
            case 0:
                x++;
                break;
            case 1:
                y--;
                break;
            case 2:
                x--;
                break;
            case 3:
                y++;
                break;
            default:
                break;
            }
        }
        else if (T[i] == 'R')
        {
            direction++;
            if (direction > 3)
            {
                direction = 0;
            }
        }
    }
    cout << x << " " << y << endl;

    return 0;
}