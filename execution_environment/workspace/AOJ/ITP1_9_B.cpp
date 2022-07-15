#include <bits/stdc++.h>
using namespace std;

int main()
{

    while (true)
    {
        string input_letters;

        cin >> input_letters;
        if (input_letters == "-")
        {
            break;
        }
        int letters_length = input_letters.size();
        int n;
        cin >> n;
        vector<int> h(n);
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        string output_letters = input_letters;
        for (int i = 0; i < n; i++)
        {
            string move_letters = input_letters.substr(0, h[i]);

            output_letters = input_letters.erase(0, h[i]);
            output_letters += move_letters;
            input_letters = output_letters;
        }
        cout << output_letters << endl;
    }
    return 0;
}