#include <bits/stdc++.h>
using namespace std;


int main(){
    string text;
    cin >> text;
    string pattern_string;
    cin >> pattern_string;
    string marge_text = text + text;

    if(marge_text.find(pattern_string) != string::npos){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}