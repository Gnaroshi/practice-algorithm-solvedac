// // problem:
// // id:
// // time taken:
// #include <bits/stdc++.h>
// using namespace std;
// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, m;
//     cin >> n >> m;
//     int **board = (int **)malloc(sizeof(int *) * n);
//     for (int i = 0; i < n; i++)
//     {
//         board[i] = (int *)malloc(sizeof(int) * m);
//         fill(board[i], board[i] + m, 0);
//     }
//     int **cnts = (int **)malloc(sizeof(int *) * n);
//     for (int i = 0; i < n; i++)
//     {
//         cnts[i] = (int *)malloc(sizeof(int) * m);
//         fill(cnts[i], cnts[i] + m, 0);
//     }

//     for (int i = 0; i < n; i++)
//         cin >> board[i][0];

//     for (int i = 1; i < m; i++)
//         cin >> board[n - 1][i];

//     for (int i = 0; i < n; i++)
//     {
//         if (board[i][0] == 0)
//         {
//             cout << i + 1 << ' ' << 1 << '\n';
//             return 0;
//         }
//     }
//     for (int i = 1; i < m; i++)
//     {
//         if (board[n - 1][i] == 0)
//         {
//             cout << n << ' ' << i + 1 << '\n';
//             return 0;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         int dist = board[i][0];
//         for (int j = 0; j <= i; j++)
//         {
//             if (dist - i + j >= 0 && dist - i + j < m)
//                 cnts[j][dist - i + j]++;
//         }
//         for (int j = i; j < n; j++)
//         {
//             if (dist - j + i >= 0 && dist - j + i < m)
//                 cnts[j][dist - j + i]++;
//         }
//     }
//     for (int i = 1; i < m; i++)
//     {
//         int dist = board[n - 1][i];
//         for (int j = 0; j <= i; j++)
//         {
//             if (dist - i + j >= 0 && dist - i + j < n)
//                 cnts[dist - i + j][j]++;
//         }
//         for (int j = i; j < m; j++)
//         {
//             if (dist - j + i >= 0 && dist - j + i < n)
//                 cnts[dist - j + i][j]++;
//         }
//     }
//     int x, y;
//     int mx = -1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (cnts[i][j] > mx)
//             {
//                 x = i;
//                 y = j;
//                 mx = cnts[i][j];
//             }
//         }
//     }
//     cout << x + 1 << ' ' << y + 1 << '\n';

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

    int n, m;
    cin >> n >> m;
    int **board = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++)
    {
        board[i] = (int *)malloc(sizeof(int) * m);
        fill(board[i], board[i] + m, 0);
    }

    int *one_board = (int *)malloc(sizeof(int) * (n + m));

    for (int i = 0; i < n; i++)
    {
        cin >> board[i][0];
        one_board[i] = board[i][0];
    }

    for (int i = 1; i < m; i++)
    {
        cin >> board[n - 1][i];
        one_board[i + n] = board[n - 1][i];
    }

    for (int i = 0; i < n; i++)
    {
        if (board[i][0] == 0)
        {
            cout << i + 1 << ' ' << 1 << '\n';
            return 0;
        }
    }
    for (int i = 1; i < m; i++)
    {
        if (board[n - 1][i] == 0)
        {
            cout << n << ' ' << i + 1 << '\n';
            return 0;
        }
    }

    bool isFound = false;
    int x, y;
    for (int i = 0; i < n - 1; i++)
    {
        if (isFound)
            break;
        for (int j = 1; j < m; j++)
        {
            isFound = true;
            for (int jj = 0; jj < n; jj++)
            {
                if (abs(jj - i) + abs(0 - j) != board[jj][0])
                {
                    isFound = false;
                    break;
                }
            }
            if (!isFound)
                continue;
            for (int jj = 0; jj < m; jj++)
            {
                if (abs(n - 1 - i) + abs(jj - j) != board[n - 1][jj])
                {
                    isFound = false;
                    break;
                }
            }
            if (isFound)
            {
                x = i;
                y = j;
            }
        }
    }
    cout << x + 1 << ' ' << y + 1 << '\n';
    return 0;
}