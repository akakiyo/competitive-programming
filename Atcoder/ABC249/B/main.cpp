#include <bits/stdc++.h>
using namespace std;

bool checkLowercaseLetters(char extractedChar)
{
    bool flag = false;
    if (extractedChar >= 'a' && extractedChar <= 'z')
    {
        flag = true;
    }
    return flag;
}
bool checkUppercaseLetters(char extractedChar)
{
    bool flag = false;
    if (extractedChar >= 'A' && extractedChar <= 'Z')
    {
        flag = true;
    }
    return flag;
}
int main()
{
    string S;
    cin >> S;
    bool uppercaseFlag = false;
    bool lowercaseFlag = false;
    bool findedSameChar = false;
    for (int i = 0; i < S.size(); i++)
    {
        string extractedStr = S.substr(i + 1, S.size());
        if (extractedStr.find(S[i]) != std::string::npos)
        {
            findedSameChar = true;
            break;
        }
        if (!lowercaseFlag)
        {
            if (checkLowercaseLetters(S[i]))
            {
                lowercaseFlag = true;
            };
        }
        if (!uppercaseFlag)
        {
            if (checkUppercaseLetters(S[i]))
            {
                uppercaseFlag = true;
            };
        }
    }
    if (uppercaseFlag && lowercaseFlag && !findedSameChar)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}