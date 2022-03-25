#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<pair<int, int>> xy(N);
    for (int i = 0; i < N; ++i)
    {
        int x, y;
        cin >> x >> y;
        xy[i] = make_pair(x, y);
    }
    string S;
    cin >> S;

    unordered_map<int, int> go_R;
    unordered_map<int, int> go_L;

    bool conflict = false;
    for (int i = 0; i < N; ++i)
    {
        int x = xy[i].first, y = xy[i].second;
        if (S[i] == 'R')
        {
            //もし前に、y座標が同じ右に進む人がいない、つまりright[y]が空の時　right[y]にx座標を入れる
            if (go_R.count(y) == 0)
            {
                go_R[y] = x;
                if (go_L.count(y) != 0 && go_L[y] >= x)
                    conflict = true;
            }
            else if (go_R[y] > x)
            {
                go_R[y] = x;
                if (go_L.count(y) != 0 && go_L[y] >= x)
                    conflict = true;
            }
        }
        else
        {
            //もし前に、y座標が同じかつ左に進む人がいない時、left[y]にx座標を入れる
            if (go_L.count(y) == 0)
            {
                go_L[y] = x;
                //もし前に、y座標が同じかつ右に進む人が存在して、今見てるx座標よりも小さかった場合衝突する
                if (go_R.count(y) != 0 && go_R[y] <= x)
                    conflict = true;
            }
            //前にy座標が同じかつ左に進む人がいたとき、x座標がleft[y]より大きければ更新する
            else if (x > go_L[y])
            {
                go_L[y] = x;
                //もし前に、y座標が同じかつ右に進む人が存在して、今見てるx座標よりも小さかった場合衝突する
                if (go_R.count(y) != 0 && go_R[y] <= x)
                    conflict = true;
            }
        }
    }
    if (conflict)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}