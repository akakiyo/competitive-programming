#include <bits/stdc++.h>
using namespace std;

int main(){
    int H;
    double x;
    cin >> H;
    x = sqrt(double(H)*(12800000+double(H)));
    cout << fixed << std::setprecision(9)<< endl;
    cout << x << endl;
}