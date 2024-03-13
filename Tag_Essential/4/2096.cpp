// #include <bits/stdc++.h>
// using namespace std;

// #define MX 100005

// int n;
// int board[MX][3];
// int board_mx[MX][3];
// int board_mn[MX][3];

// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     cin >> n;
//     for (int i = 1; i <= n; i++)
//         for (int j = 0; j < 3; j++)
//             cin >> board[i][j];

//     // int mx, mn;
//     // mx = -1;
//     // mn = 0x3f3f3f3f;

//     for (int i = 1; i <= n; i++)
//     {
//         board_mx[i][0] += max(board_mx[i - 1][0], board_mx[i - 1][1]) + board[i][0];
//         board_mx[i][1] += max(board_mx[i - 1][0], max(board_mx[i - 1][1], board_mx[i - 1][2])) + board[i][1];
//         board_mx[i][2] += max(board_mx[i - 1][1], board_mx[i - 1][2]) + board[i][2];
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         board_mn[i][0] += min(board_mn[i - 1][0], board_mn[i - 1][1]) + board[i][0];
//         board_mn[i][1] += min(board_mn[i - 1][0], min(board_mn[i - 1][1], board_mn[i - 1][2])) + board[i][1];
//         board_mn[i][2] += min(board_mn[i - 1][1], board_mn[i - 1][2]) + board[i][2];
//     }

//     int mx = max(board_mx[n][0], max(board_mx[n][1], board_mx[n][2]));
//     int mn = min(board_mn[n][0], min(board_mn[n][1], board_mn[n][2]));
//     cout << mx << ' ' << mn << '\n';

//     // for (int i = 0; i <= n; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //         cout << board_mx[i][j] << ' ';
//     //     cout << '\n';
//     // }
//     return 0;
// }
// 메모리 초과
#include <bits/stdc++.h>
using namespace std;

#define MX 100005

int n;
int board[3];
int board_mx[2][3];
int board_mn[2][3];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> board[j];

        board_mx[1][0] = max(board_mx[0][0], board_mx[0][1]) + board[0];
        board_mx[1][1] = max(board_mx[0][0], max(board_mx[0][1], board_mx[0][2])) + board[1];
        board_mx[1][2] = max(board_mx[0][1], board_mx[0][2]) + board[2];

        board_mn[1][0] = min(board_mn[0][0], board_mn[0][1]) + board[0];
        board_mn[1][1] = min(board_mn[0][0], min(board_mn[0][1], board_mn[0][2])) + board[1];
        board_mn[1][2] = min(board_mn[0][1], board_mn[0][2]) + board[2];

        // cout << "\n-----\n";
        // for (int k = 0; k < 2; k++)
        // {
        //     for (int kk = 0; kk < 3; kk++)
        //         cout << board_mx[k][kk] << ' ';
        //     cout << '\n';
        // }

        for (int j = 0; j < 3; j++)
        {
            board_mx[0][j] = board_mx[1][j];
            board_mn[0][j] = board_mn[1][j];
        }
    }

    int mx = max(board_mx[1][0], max(board_mx[1][1], board_mx[1][2]));
    int mn = min(board_mn[1][0], min(board_mn[1][1], board_mn[1][2]));
    cout << mx << ' ' << mn << '\n';

    return 0;
}