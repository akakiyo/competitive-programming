#include <bits/stdc++.h>
using namespace std;

int main(){

    while(true){
        int m,f,r,total;
        char grade;

        cin >> m >> f >> r;
        if(m==-1&&f==-1&&r==-1){
            break;
        }
        if(m == -1 || f ==-1){
            cout << 'F' << endl;
            continue;
        }
         total =  m + f;
        if(80<=total){
            grade = 'A';
        }else if( 65<= total &&total <80 ){
            grade = 'B';
        }else if( 50<= total &&total <65 ){
            grade = 'C';
        }else if( 30<= total &&total <50){
            if(50<=r){
                grade = 'C';
            }else{
                grade = 'D';
            }
        }else if(total <30){
            grade = 'F';
        }
        cout << grade << endl;
    }
}