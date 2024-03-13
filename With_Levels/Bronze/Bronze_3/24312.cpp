// // problem: ДИНИ
// // id: 24312
// // time taken:
// #include <bits/stdc++.h>
// using namespace std;
// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n[4];
//     for (int i = 0; i < 4; i++)
//         cin >> n[i];
//     sort(n, n + 4);
//     int mn = 500;
//     for (int i = 0; i < 2; i++)
//     {
//         int t = 0;
//         if (i)
//             t += n[0];
//         else
//             t -= n[0];
//         for (int j = 0; j < 2; j++)
//         {
//             if (j)
//                 t += n[1];
//             else
//                 t -= n[1];
//             for (int ii = 0; ii < 2; ii++)
//             {
//                 if (ii)
//                     t += n[2];
//                 else
//                     t -= n[2];
//                 for (int jj = 0; jj < 2; jj++)
//                 {
//                     if (jj)
//                         t += n[3];
//                     else
//                         t -= n[3];
//                     mn = min(mn, abs(t));
//                     if (!jj)
//                         t += n[3];
//                     else
//                         t -= n[3];
//                 }
//                 if (!ii)
//                     t += n[2];
//                 else
//                     t -= n[2];
//             }
//             if (!j)
//                 t += n[1];
//             else
//                 t -= n[1];
//         }
//     }
//     cout << mn;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

bool *bp(int n)
{
    bool *ret = (bool *)malloc(sizeof(bool) * 4);
    fill(ret, ret + 4, 0);
    int t = n;
    int loc = 0;
    while (t > 0)
    {
        ret[loc] = t % 2;
        t /= 2;
        loc++;
    }
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n[4];
    for (int i = 0; i < 4; i++)
        cin >> n[i];
    sort(n, n + 4);
    int mn = 500;

    for (int i = 0; i < 16; i++)
    {
        int t = 0;
        bool *b = bp(i);
        for (int j = 0; j < 4; j++)
        {
            if (b[j])
                t += n[j];
            else
                t -= n[j];
        }
        mn = min(mn, abs(t));
    }
    cout << mn;

    return 0;
}