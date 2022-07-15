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

    bool is_equal = true;
    for (int i = 0; i < S.size();)
    {
        bool can = false; // 4個の文字列たちどれかでdivideできるか
        for (int j = 0; j < 4; j++)
        {
            if (S.substr(i, search_string[j].size()) == search_string[j])
            { // dでdivideできるか
                can = true;
                i += search_string[j].size(); // divideできたらiを進める
            }
        }
        if (!can)
        { // divideできなかったら
            is_equal = false;
            break;
        }
    }
    if (is_equal)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}