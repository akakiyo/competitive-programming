#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> nums(N);
    int count = 0;
    bool end_flag = false;
    for (int i = 0; i < N; i++)
    {
        cin >> nums[i];
    }

    while (true)
    {
        for (int i = 0; i < N; i++)
        {
            if (nums[i] % 2 != 0)
            {
                end_flag = true;
                break;
            }
            nums[i] = nums[i] / 2;
        }
        if (end_flag == true)
        {
            cout << count << endl;
            break;
        }
        count++;
    }
}