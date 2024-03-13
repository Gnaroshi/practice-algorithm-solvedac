// // problem:
// // id:
// // time taken:
// #include <bits/stdc++.h>
// using namespace std;

// int y, m, d;
// int mt[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> y >> m >> d >> t;
//     t += d;
//     while (t)
//     {
//         if ((y % 4 == 0 && y % 100) || y % 400 == 0)
//             mt[1] = 29;
//         else
//             mt[1] = 28;
//         if (mt[m - 1] < t)
//         {
//             t -= mt[m - 1];
//             m++;
//         }
//         else
//             break;
//         if (m > 12)
//         {
//             y++;
//             m = 1;
//         }
//     }
//     cout << y << ' ' << m << ' ' << t << '\n';

//     return 0;
// }

// problem:
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = "asdf";

    cout << '\\';
    cout << s.substr(4);
    return 0;
}