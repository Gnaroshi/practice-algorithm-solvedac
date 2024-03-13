// problem: 과자 사기
// id: 17450
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int loc = 0;
    double mx = -1;
    double a, b, t;
    for (int i = 0; i < 3; i++)
    {
        cin >> a >> b;
        if (a * 10 >= 5000)
            t = b * 10 / (a * 10 - 500);
        else
            t = b / a;
        if (mx < t)
        {
            mx = t;
            loc = i;
        }
    }

    if (loc == 0)
        cout << "S";
    else if (loc == 1)
        cout << "N";
    else
        cout << "U";

    return 0;
}
