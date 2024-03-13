// problem: 젓가락 게임
// id: 25642
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    bool bt = true;
    while (true)
    {
        if (a >= 5)
        {
            cout << "yj";
            break;
        }
        else if (b >= 5)
        {
            cout << "yt";
            break;
        }
        if (bt)
            b += a;
        else
            a += b;
        bt = !bt;
    }

    return 0;
}