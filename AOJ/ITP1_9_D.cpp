#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        string command;
        int a, b;
        cin >> command >> a >> b;
        if (command == "replace")
        {
            string p;
            cin >> p;
            str.replace(a, b + 1 - a, p);
        }
        else if (command == "reverse")
        {
            string extractStr;
            extractStr = str.substr(a, b + 1 - a);
            reverse(extractStr.begin(), extractStr.end());
            str.replace(a, b + 1 - a, extractStr);
        }
        else if (command == "print")
        {
            cout << str.substr(a, b + 1 - a) << endl;
        }
    }
}