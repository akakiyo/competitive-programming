#include <bits/stdc++.h>
using namespace std;


int main(){

    bool haveCard[4][13];
    char suitTemplate[4] = {'S','H','C','D'};
    for(int i=0;i<4;i++){
        for(int j=0;j<13;j++){
            haveCard[i][j] = false;
        }
    }
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int rank;
        char suit;
        int charNum;
        cin >>  suit >> rank;
        switch(suit){
            case 'S':
                charNum=0;
                break;
            case 'H':
                charNum=1;
                break;
            case 'C':
                charNum=2;
                break;
            case 'D':
                charNum=3;
                break;
        }
        haveCard[charNum][rank-1] = true;
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<13;j++){
            if(!haveCard[i][j]){
                cout << suitTemplate[i] << " " << j + 1 << endl;
            }
        }
    }
}