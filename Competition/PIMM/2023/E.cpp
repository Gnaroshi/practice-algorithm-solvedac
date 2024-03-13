// // problem: E번 - 미술 시간
// // id:
// // time taken:
// #include <bits/stdc++.h>
// using namespace std;
// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, q;
//     cin >> n >> q;
//     // vector<int> v(n + 1);
//     // vector<int> chk(n + 1);
//     // fill(v.begin(), v.end(), 0);
//     // fill(chk.begin(), chk.end(), 0);
//     int *v = (int *)malloc(sizeof(int) * n + 1);
//     int *chk = (int *)malloc(sizeof(int) * n + 1);
//     fill(v, v + n + 1, 0);
//     fill(chk, chk + n + 1, 0);
//     while (q--)
//     {
//         int a, b, x;
//         cin >> a >> b >> x;
//         bool isv = true;
//         for (int i = a; i <= b; i++)
//         {
//             if (chk[i] == 0)
//             {
//                 a = i;
//                 isv = false;
//                 break;
//             }
//             i = chk[i] - 1;
//         }
//         if (isv)
//             continue;
//         for (int i = a; i <= b; i++)
//         {
//             if (i > n)
//                 break;
//             if (chk[i] == 0)
//             {
//                 chk[i] = b + 1;
//                 v[i] = x;
//             }
//             else
//             {
//                 while (chk[i] != 0)
//                 {
//                     i = chk[i];
//                     chk[i] = b + 1;
//                 }
//                 i--;
//             }
//         }
//     }
//     for (int i = 1; i <= n; i++)
//         cout << v[i] << ' ';

//     return 0;
// } tle