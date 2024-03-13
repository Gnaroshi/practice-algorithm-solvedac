// // problem: A번 - 포스터 만들기
// // id:
// // time taken:
// #include <bits/stdc++.h>
// using namespace std;
// int dy[3] = {-1, 0, 1};
// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, m;
//     cin >> n >> m;
//     char **brd = (char **)malloc(sizeof(char *) * n);
//     for (int i = 0; i < n; i++)
//         brd[i] = (char *)malloc(sizeof(char) * m);
//     bool **vist = (bool **)malloc(sizeof(bool *) * n);
//     for (int i = 0; i < n; i++)
//     {
//         vist[i] = (bool *)malloc(sizeof(bool) * m);
//         fill(vist[i], vist[i] + m, false);
//     }
//     string s;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> s;
//         for (int j = 0; j < m; j++)
//             brd[i][j] = s[j];
//     }
//     bool chk = true;
//     queue<pair<int, int>> q;
//     for (int i = 0; i < m; i++)
//         q.push({0, i});
//     while (!q.empty())
//     {
//         auto cur = q.front();
//         q.pop();
//         vist[cur.first][cur.second] = true;
//         for (int dir = 0; dir < 3; dir++)
//         {
//             int cx = cur.first + 1;
//             int cy = cur.second + dy[dir];
//             if (cy >= m - 1 || cy <= 0)
//                 continue;
//             if (vist[cx][cy] || brd[cx][cy] != 'B')
//                 continue;
//             if (cx == n - 1)
//             {
//                 chk = false;
//                 break;
//             }
//             vist[cx][cy] = true;
//             q.push({cx, cy});
//         }
//         if (!chk)
//             break;
//     }

//     if (!chk)
//     {
//         cout << "NO";
//     }
//     else
//     {
//         for (int i = 1; i < n - 1; i++)
//         {
//             bool ap = false;
//             for (int j = m / 2 - 1; j > 0; j--)
//             {
//                 if (!ap)
//                 {
//                     if ((brd[i][j] == 'B' && brd[i][m - j - 1] == 'X') ||
//                         (brd[i][j] == 'X' && brd[i][m - j - 1] == 'B'))
//                         ap = true;
//                 }
//                 if (!ap)
//                 {
//                     brd[i][j] = 'W';
//                     brd[i][m - j - 1] = 'W';
//                 }
//                 else
//                 {
//                     brd[i][j] = 'B';
//                     brd[i][m - j - 1] = 'B';
//                 }

//                 if (m % 2)
//                 {
//                     if (brd[i][m / 2] != 'B')
//                         brd[i][m / 2] = 'Y';
//                 }
//                 else
//                 {
//                     if (brd[i][m / 2] != 'B' && brd[i][m / 2 - 1] != 'B')
//                     {
//                         brd[i][m / 2] = 'Y';
//                         brd[i][m / 2 - 1] = 'Y';
//                     }
//                 }
//             }
//         }

//         cout << "YES\n";
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//                 cout << brd[i][j];
//             cout << '\n';
//         }
//     }

//     return 0;
// }

// problem: A번 - 포스터 만들기
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
    char **brd = (char **)malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++)
        brd[i] = (char *)malloc(sizeof(char) * m);
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < m; j++)
            brd[i][j] = s[j];
    }

    int mc = 0, mcr = 0, mcl = 0;
    for (int i = 0; i < n; i++)
    {
        if (m % 2)
        {
            if (brd[i][m / 2] == 'B')
                mc++;
        }
        else
        {
            if (brd[i][m / 2] == 'B')
                mcr++;
            if (brd[i][m / 2 - 1] == 'B')
                mcl++;
        }
    }
    if (mc == n || mcr == n || mcl == n)
    {
        cout << "NO";
        return 0;
    }
    bool chk = false;
    int cp = 0;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (m % 2)
        {
            if (brd[i][m / 2] != 'B')
                q.push(i);
        }
        else
        {
            if (brd[i][m / 2] != 'B' && brd[i][m / 2 - 1] != 'B')
                q.push(i);
        }
    }
    while (!q.empty())
    {
        int i = q.front();
        q.pop();
        if (m % 2)
        {
            if (brd[i][m / 2 - 1] != 'B' && brd[i][m / 2 + 1] != 'B')
            {
                chk = true;
                cp = i;
                brd[i][m / 2] = 'Y';
                brd[i][m / 2 - 1] = 'W';
                brd[i][m / 2 + 1] = 'W';
                break;
            }
        }
        else
        {
            if (brd[i][m / 2 + 1] != 'B' && brd[i][m / 2 - 2] != 'B')
            {
                chk = true;
                cp = i;
                brd[i][m / 2] = 'Y';
                brd[i][m / 2 - 1] = 'Y';
                brd[i][m / 2 + 1] = 'W';
                brd[i][m / 2 - 2] = 'W';
                break;
            }
        }
    }
    if (chk)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (brd[i][j] != 'Y' && brd[i][j] != 'W')
                    cout << 'B';
                else
                    cout << brd[i][j];
            }
            cout << '\n';
        }
    }
    else
    {
        cout << "NO";
    }

    return 0;
}