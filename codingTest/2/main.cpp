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
int main(int argc, char *argv[])
{
    string line;
    V<string> input_line;
    while (!cin.eof())
    {
        getline(cin, line);
        input_line.push_back(line);
    }

    int N, W;
    V<int> employee;
    for (int i = 0; i < int(input_line.size()); i++)
    {
        if (i == 0)
        {
            string input_num;
            for (int j = 0; j < int(input_line[0].size()); j++)
            {
                if (input_line[0][j] == ' ')
                {
                    N = atoi(input_num.c_str());
                    input_num = "";
                    continue;
                }
                else if (j == int(input_line[i].size()) - 1)
                {
                    input_num += input_line[0][j];
                    W = atoi(input_num.c_str());
                    input_num = "";
                    continue;
                }
                input_num += input_line[0][j];
            }
        }
        else
        {
            string input_num;
            for (int j = 0; j < int(input_line[i].size()); j++)
            {
                if (input_line[i][j] == ' ')
                {
                    employee.push_back(atoi(input_num.c_str()));
                    input_num = "";
                    continue;
                }
                else if (j == int(input_line[i].size()) - 1)
                {
                    input_num += input_line[i][j];
                    employee.push_back(atoi(input_num.c_str()));
                    continue;
                }
                input_num += input_line[i][j];
            }
        }
    }
    V<int> finish_num(N);
    for (int i = 0; i < N; i++)
    {
        finish_num[i] = employee[i] / W;
        if (employee[i] % W != 0)
        {
            finish_num[i]++;
        }
    }
    auto max_finish_num = max_element(finish_num.begin(), finish_num.end());
    for (int i = 0; i <= *max_finish_num; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (finish_num[j] == i)
            {
                cout << j + 1 << endl;
            }
        }
    }
    return 0;
}