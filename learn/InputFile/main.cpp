#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    vector<string> inputArg(argc);
    for (int i = 0; i < argc; i++)
    {
        inputArg[i] = argv[i];
        cout << inputArg[i] << endl;
    }
    ifstream ifs(inputArg[1]);
    string str;
    if (ifs.fail())
    {
        cerr << "Failed to open file." << endl;
    }
    vector<vector<int>> num(3);
    int count = 0;
    while (getline(ifs, str))
    {
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == ' ')
                continue;
            num[count].push_back(atoi(&str[i]));
        }
        count++;
    }
    // cout << num.size() << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < num[i].size(); j++)
        {
            cout << num[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}