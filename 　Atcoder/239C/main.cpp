#include <bits/stdc++.h>
using namespace std;

int main(){
    long long x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "x1："<< x1 << " ,y1："<< y1 << " ,x1："<< x2 << " ,y2："<< y2 << endl;


    long long tilt = (y2-y1)/(x2-x1);
    cout << "tilt：" << tilt << endl;
    long long a = -1/tilt;
    cout << "a：" << a << endl;
    double x,y;
    x = (double(x1)+double(x2))/2;
    y = (double(y1)+double(y2))/2;

    cout << y << endl;
    cout << (a * x) << endl;
    long long b = y - (a * x);
    cout << "b：" << b << endl;
    cout << "y=" << a << "x" << "+" << b<< endl;
    cout << "x：" << x << endl;
    cout << "y：" << y << endl;
    for(int i = 0;i<5;i++){
        long long x3 = x + i;
        long long y3 = a*x3+b;

        cout << "座標" << "x:" << x3 << "y:" << y3 << endl;
        cout << "i="<< i << ":" << sqrt(pow(x1-x3,2) + pow(y1-y3,2)) << endl;
        if(sqrt(pow(x1-x3,2) + pow(y1-y3,2))==sqrt(5)){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}