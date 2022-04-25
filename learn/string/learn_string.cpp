#include <bits/stdc++.h>
using namespace std;

int learn_string()
{
    // 文字列
    string str1, str2, str3;
    str1 = "Hello, ";
    str2 = "World!";
    str3 = str1 + str2; //文字列の結合
    cout << str3 << endl;

    cout << str3.at(1) << endl;  //文字へのアクセス
    cout << str3.size() << endl; //文字列の長さ取得

    // 文字
    char c = str3.at(1);

    // 文字列の比較
    string str4 = "ABC";
    string str5 = "ABC";
    if (str4 == str5)
    {
        cout << "等しい" << endl;
    }

    // 行単位での入力
    string s, t;
    getline(cin, s);
    getline(cin, t);

    cout << "一行目 " << s << endl;
    cout << "二行目 " << t << endl;

    string str, extractedStr;
    // 文字列から一部抽出
    extractedStr = str.substr(3, 6); //文字列の3番目から5番目の文字を抽出
    // 文字列を逆順にする
    reverse(extractedStr.begin(), extractedStr.end());
    // 文字列内の文字を置き換える
    str.replace(3, 6, extractedStr);

    // int型を文字列に変換
    int num = 100;
    string num_string = to_string(num);
    cout << num_string << endl;
}
