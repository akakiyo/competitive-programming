#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M;

    cin >> N >> M;
    vector<long int> A(N);
    vector<long int> B(M);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    for(int i=0;i<M;i++){
        cin >> B[i];
    }
    int enable_plan;
    for(int i=0;i<M;i++){
        enable_plan = false;
        for(int j=0;j<N;j++){
            if(A[j]==-1) continue;

            if(B[i]==A[j]){
                A[j] = -1;
                enable_plan = true;
                break;
            }
        }
        if(!enable_plan){
            cout << "No" << endl;
            break;
        }
    }
    if(enable_plan){
        cout << "Yes" << endl;
    }
    return 0;
}
