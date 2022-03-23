#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << fixed << setprecision(8);
    while (true)
    {
        int num;
        cin >> num;
        if (num == 0)
        {
            break;
        }
        vector<int> examination(num);
        for (int i = 0; i < num; i++)
        {
            cin >> examination[i];
        }
        double ave = accumulate(examination.begin(), examination.end(), 0.0) / examination.size();
        double distributed = 0;
        for (int i = 0; i < num; i++)
        {
            distributed += pow((examination[i] - ave), 2);
        }
        distributed /= num;
        cout << sqrt(distributed) << endl;
    }
    return 0;
}