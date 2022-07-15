#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<string,int>> report(26);
    int char_code_a = 97;
    for(int i=0;i<26;i++){
        char alphabet = char(char_code_a+i);
        report[i].first.push_back(alphabet);
        report[i].second = 0;
    }

    string input_letters;
    //入力がなくなるまで回す
    while(true){
        string letters;
        getline(cin,letters);
        //文字列が空かを判定
        if(letters.empty()){
            break;
        }
        input_letters.append(letters);
    }
    
    // 文字列の大文字=>小文字,(小文字=>大文字の場合は、::toupperを利用)
    transform(input_letters.begin(),input_letters.end(),input_letters.begin(),::tolower);

    for(int i=0;i<input_letters.size();i++){
        for(int j=0;j<26;j++){
            if(input_letters[i] ==  report[j].first[0]){
                report[j].second ++;
            }
        }
    }
    for(int i=0;i<26;i++){
        cout << report[i].first << " : "<< report[i].second << endl;
    }

    return 0;
}
