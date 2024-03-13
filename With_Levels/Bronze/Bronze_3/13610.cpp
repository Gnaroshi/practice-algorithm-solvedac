// problem: Volta
// id: 13610
// time taken:
// #include <bits/stdc++.h>
// using namespace std;
// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int x, y, d;
//     cin >> x >> y;
//     bool isOver = false;
//     int cnt = 0;
//     int xx = 0, yy = 0;
//     int xc = 0, yc = 0;
//     while (true)
//     {
//         if (xx == x)
//         {
//             xc++;
//             xx = 0;
//         }
//         if (yy == y)
//         {
//             yc++;
//             yy = 0;
//         }
//         cnt++;
//         xx++;
//         yy++;
//         if (xc - yc == 1 && xx >= yy)
//             break;
//     }
//     cout << xc;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;
    int cnt = 1;
    while (true)
    {
        if ((y - x) * cnt >= y)
            break;
        cnt++;
    }
    cout << cnt;

    return 0;
}