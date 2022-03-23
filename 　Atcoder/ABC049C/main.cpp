#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    vector<string> search_string{
        "dream",
        "dreamer",
        "erase",
        "eraser",
    };

    reverse(S.begin(), S.end());
    for (int i = 0; i < int(search_string.size()); i++)
    {
        reverse(search_string[i].begin(), search_string[i].end());
    }

    bool is_equal = false;
    while (true)
    {
        bool is_deleted = false;
        for (int i = 0; i < int(search_string.size()); i++)
        {
            if (S == "")
            {
                is_equal = true;
                break;
            }
            int found_index = S.find(search_string[i]);
            if (found_index != -1)
            {
                S.erase(found_index, search_string[i].size());
                is_deleted = true;
            }
        }

        if (is_equal)
        {
            cout << "YES" << endl;
            break;
        }
        if (!is_deleted)
        {
            cout << "NO" << endl;
            break;
        }
    }
    return 0;
}