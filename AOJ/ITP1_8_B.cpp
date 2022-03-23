#include <bits/stdc++.h>
using namespace std;

// charをintに変換するプログラム
int ctoi(char c) {
	if (c >= '0' && c <= '9') {
		return c - '0';
	}
	return 0;
}
int main(){
    while(true){
        string input_num;
        cin >> input_num;
        int division_num = input_num.size();
        bool end_flag = false;
        vector<int> split_num(division_num);

        if(division_num==1&&input_num == "0")   break;

        for(int i=0;i<division_num;i++){
            split_num[i] = ctoi(input_num[i]);
        }
        int sum = accumulate(split_num.begin(),split_num.end(),0);
        cout << sum << endl;
    }
    return 0;
}
