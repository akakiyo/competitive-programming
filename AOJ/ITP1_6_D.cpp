#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    int A[n][m],b[m],l;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> l;
            A[i][j] =l;
        }
    }
    for (int j=0;j<m;j++){
        cin >> l;
        b[j] = l;
    }
    for(int i=0;i<n;i++){
        int ans=0;
        for(int j=0;j<m;j++){
            ans += A[i][j] * b[j];
        }
        cout << ans << endl;
    }
    return 0;
}