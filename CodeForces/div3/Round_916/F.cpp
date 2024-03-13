// // problem: F. Programming Competition
// // id:
// // time taken:
// #include <bits/stdc++.h>
// using namespace std;
// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int tc;
//     cin >> tc;
//     while (tc--)
//     {
//         int n, t, le = 0;
//         cin >> n;
//         int *cnt = new int[n];
//         fill(cnt, cnt + n, 0);
//         for (int i = 1; i < n; i++)
//         {
//             cin >> t;
//             cnt[t - 1]++;
//         }
//         for (int i = 1; i < n; i++)
//         {
//             if (cnt[i])
//                 continue;
//             le++;
//         }
//         cout << le / 2 << '\n';
//         delete[] cnt;
//     }

//     return 0;
// }
// 그래프 이론 공부 후 재도전 해볼 것