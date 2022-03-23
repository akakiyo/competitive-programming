#include <bits/stdc++.h>
using namespace std;

int main(){
    string W,T;
    cin >> W;
    while(true){
        string input_text;
        cin >> input_text;
        if(input_text == "END_OF_TEXT"){
            break;
        }
        T += input_text + " ";
    }
    transform(T.begin(),T.end(),T.begin(),::tolower);

    int word_count=0;
    int start_index=0;

    string extractT= T;
    auto offset = string::size_type(0);
    while(true){
        auto pos = T.find(" ", offset);
        if (pos == string::npos) {
            cout << word_count << endl;
            break;
        }
        if(T.substr(offset,pos-offset) == W){
            word_count ++;
        }
        offset = pos + 1;
    }
}