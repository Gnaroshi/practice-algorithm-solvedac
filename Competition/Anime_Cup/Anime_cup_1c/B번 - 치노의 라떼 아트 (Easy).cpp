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
//         int r, c;
//         cin >> r >> c;
//         int ans = 0;
//         char board[12][12];
//         for (int i = 0; i < 12; i++)
//             fill(board[i], board[i] + 12, 0);
//         for (int i = 0; i < r; i++)
//         {
//             string temp;
//             cin >> temp;
//             for (int j = 0; j < c; j++)
//             {
//                 board[i][j] = temp[j];
//             }
//         }

//         int iter = max(r, c);
//         int window = 2;
//         for (int w = 0; w < iter; w++)
//         {
//             for (int i = 0; i <= r - window; i++)
//             {
//                 for (int j = 0; j <= c - window; j++)
//                 {
//                     int cnt_sharp = 0;
//                     int cnt_dot = 0;
//                     for (int ii = i; ii < i + window; ii++)
//                     {
//                         for (int jj = j; jj < j + window; jj++)
//                         {
//                             if (board[ii][jj] == '#')
//                                 cnt_sharp++;
//                             if (board[ii][jj] == '.')
//                                 cnt_dot++;
//                         }
//                     }

//                     cout << "i: " << i << " j: " << j << '\n';
//                     cout << "dot: " << cnt_dot << " sharp: " << cnt_sharp << '\n';
//                     if (cnt_dot >= cnt_sharp)
//                         break;

//                     int cnt_corner = 0;
//                     int loc_corner = 0;
//                     int cx, cy;
//                     if (board[i][j] == '.')
//                     {
//                         cnt_corner++;
//                         loc_corner = 1;
//                     }
//                     if (board[i][j + window] == '.')
//                     {
//                         cnt_corner++;
//                         loc_corner = 2;
//                     }
//                     if (board[i + window][j] == '.')
//                     {
//                         cnt_corner++;
//                         loc_corner = 3;
//                     }
//                     if (board[i + window][j + window] == '.')
//                     {
//                         cnt_corner++;
//                         loc_corner = 4;
//                     }
//                     if (cnt_corner != 1)
//                         break;

//                     int c_len = 0;
//                     bool isCorner = true;
//                     if (loc_corner == 1)
//                     {
//                         cx = i;
//                         cy = j;
//                         for (int ii = cx; ii < cx + window; ii++)
//                         {
//                             if (board[ii][cy] == '#')
//                             {
//                                 c_len = ii - cx;
//                                 break;
//                             }
//                         }
//                         if (c_len > window / 2)
//                             break;
//                         for (int ii = cx; ii < cx + c_len; ii++)
//                         {
//                             for (int jj = cy; jj < cy + c_len; jj++)
//                             {
//                                 if (board[ii][jj] == '#')
//                                 {
//                                     isCorner = false;
//                                     break;
//                                 }
//                             }
//                         }
//                         if (!isCorner)
//                             break;
//                         bool isOk = true;
//                         for (int ii = cx; ii < cx + window; ii++)
//                         {
//                             if (!isOk)
//                                 break;
//                             for (int jj = cy; jj < cy + window; jj++)
//                             {
//                                 if (ii >= cx && ii < cx + c_len && jj >= cy && jj < cy + c_len)
//                                     continue;
//                                 if (board[ii][jj] == '.')
//                                 {
//                                     isOk = false;
//                                     break;
//                                 }
//                             }
//                         }
//                         ans++;
//                         cout << ans << '\n';
//                     }
//                 }
//             }
//         }
//     }

//     return 0;
// }