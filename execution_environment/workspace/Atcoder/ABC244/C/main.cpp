#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> used_nums{0};
    int N;
    bool first_flag = true;
    while (true)
    {
        cin >> N;
        if (N == 0)
        {
            break;
        }
        if (!first_flag)
        {
            used_nums.push_back(N);
        }
        first_flag = false;

        int declaration_num;
        for (int i = 1; i < (2 * N + 1); i++)
        {
            declaration_num = i;
            if (*find(used_nums.begin(), used_nums.end(), declaration_num) == declaration_num)
            {
                continue;
            }
            else
            {
                used_nums.push_back(declaration_num);
                break;
            }
        }
        cout << declaration_num << endl;
    }
    return 0;
}