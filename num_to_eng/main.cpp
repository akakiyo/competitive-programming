#include <bits/stdc++.h>
using namespace std;
template <class T>
bool chmin(T &a, const T &b) { return a > b ? a = b, true : false; }
template <class T>
bool chmax(T &a, const T &b) { return a < b ? a = b, true : false; }
template <class T>
using V = std::vector<T>;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;

int ctoi(char c)
{
    if (c >= '0' && c <= '9')
    {
        return c - '0';
    }
    return 0;
}
int main()
{
    V<string> other_places = {
        "hundred",
        "thousand",
        "million",
        "billion",
    };
    V<string> one_to_nine = {
        "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    V<string> ten_to_nineteen = {
        "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    V<string> ten_places = {
        "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string input_num = "1234075454";
    int check = 0;
    int count = 1;
    V<string> ans;
    for (int i = int(input_num.size()) - 1; i >= 0; i--)
    {
        if (check == 0)
        {
            if (i != int(input_num.size()) - 1)
            {
                if (input_num[i] != '0' || input_num[i - 1] != '0')
                {
                    ans.push_back(other_places[count]); //位の格納
                }
                count++;
            }
            if (input_num[i - 1] == '1')
            {
                ans.push_back(ten_to_nineteen[ctoi(input_num[i])]);
            }
            else
            {
                ans.push_back(one_to_nine[ctoi(input_num[i])]);    //分割した時の1の位
                ans.push_back(ten_places[ctoi(input_num[i - 1])]); //分割した時の10の位
            }
            i--;
            check = 1;
        }
        else
        {
            if (input_num[i] != '0')
            {
                ans.push_back(other_places[0]);                 // hundredを格納
                ans.push_back(one_to_nine[ctoi(input_num[i])]); //分割した時の100の位の格納
            }

            check = 0;
        }
    }
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < int(ans.size()); i++)
    {
        if (ans[i] == "")
            continue;
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}