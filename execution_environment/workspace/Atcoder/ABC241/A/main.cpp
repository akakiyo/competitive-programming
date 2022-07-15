#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(10);
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    int index = 0;
    // for(int i=0;i<10;i++){
    //     if(a[i]==0){
    //         index = i;
    //         break;
    //     }
    // }
    for (int i = 0; i < 2; i++)
    {
        // cout << "index:" << index <<" " << "a:" << a[index] <<  endl;
        index = a[index];
    }
    cout << a[index] << endl;
    return 0;
}
