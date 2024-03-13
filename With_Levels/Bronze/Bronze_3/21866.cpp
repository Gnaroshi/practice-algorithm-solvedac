// problem: 추첨을 통해 커피를 받자
// id: 21866
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, sc, s = 0;
    bool isH = false;
    for (int i = 0; i < 9; i++)
    {
        cin >> t;
        s += t;
        sc = (i / 2 + 1) * 100;
        if (t > sc)
            isH = true;
    }
    if (isH)
        cout << "hacker";
    else
    {
        if (s >= 100)
            cout << "draw";
        else
            cout << "none";
    }

    return 0;
}