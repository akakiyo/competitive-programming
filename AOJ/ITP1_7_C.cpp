#include <bits/stdc++.h>
using namespace std;

int main(){
    int r,c;
    cin >> r >> c;
    int table_value[r+1][c+1];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int input_num;
            cin >> input_num;
            table_value[i][j] = input_num;
        }
    }
    for(int i=0;i<r;i++){
        int row_sum = 0;
        for(int j=0;j<c;j++){
            row_sum+= table_value[i][j];
        }
        table_value[i][c] =row_sum;
    }
    int sum=0;
    for(int j=0;j<c;j++){
        int column_sum = 0;
        for(int i=0;i<r;i++){
            column_sum += table_value[i][j];
        }
        table_value[r][j] = column_sum;
        sum += column_sum;
    }
    table_value[r][c] = sum;
    for(int i=0;i<r+1;i++){
        for(int j=0;j<c+1;j++){
            cout << table_value[i][j];
            if(j!=c){
                cout << " ";
            }
        }
        cout << endl;
    }
}

