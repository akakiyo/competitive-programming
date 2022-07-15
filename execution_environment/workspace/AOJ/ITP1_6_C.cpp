#include <bits/stdc++.h>
using namespace std;


static const int BUILDING_NUM = 4;
static const int FLOOR_NUM = 3;
static const int ROOM_NUM  = 10;

int main(){


    int notification[BUILDING_NUM][FLOOR_NUM][ROOM_NUM];

    for(int i=0;i<BUILDING_NUM;i++){
        for(int j=0;j<FLOOR_NUM;j++){
            for(int k=0;k<ROOM_NUM;k++){
                notification[i][j][k] = 0;
            }
        }
    }
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int building_index,floor_index,room_index,person_num;
        cin >> building_index>>floor_index>>room_index>>person_num;
        notification[building_index-1][floor_index-1][room_index-1] += person_num;
    }

    for(int i=0;i<BUILDING_NUM;i++){
        for(int j=0;j<FLOOR_NUM;j++){
            for(int k=0;k<ROOM_NUM;k++){
                cout << " " << notification[i][j][k];
            }
            cout << "" << endl;
        }
        if(i!=BUILDING_NUM-1){
            cout << "####################" << endl;
        }
    }
    return 0;
}