#include <bits/stdc++.h>
using namespace std;

// 大文字を小文字に、小文字を大文字にするプログラム
int main(){
    string input_letters;
    getline(cin,input_letters);
    for(int i=0;i<input_letters.size();i++){
        char c = input_letters.at(i);
        if(islower(c)){
            input_letters[i] = toupper(c);
        }else{
            input_letters[i] = tolower(c);
        }
    }
    cout << input_letters << endl;
    return 0;
}
