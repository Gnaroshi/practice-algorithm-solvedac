// // problem:
// // id:
// // time taken:
// #include <bits/stdc++.h>
// using namespace std;
// const int BMAX = 26;

// char board[BMAX][BMAX];
// int dx[2][4] = {{1, 0, -1, 0}, {0, 1, 0, -1}};
// int dy[2][4] = {{0, 1, 0, -1}, {1, 0, -1, 0}};

// void rot(int n)
// {
//     char t[BMAX][BMAX];
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < n; j++)
//             t[i][j] = board[n - j - 1][i];
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < n; j++)
//             board[i][j] = t[i][j];
//     // copy(&board[0][0], &board[0][0] + n * n, &t[0][0]);
//     return;
// }

// string fn(int n, int cw)
// {
//     bool vist[n][n];
//     for (int i = 0; i < n; i++)
//         fill(vist[i], vist[i] + n, 0);
//     string ret = "";
//     int cx = 0, cy = 0, dir = 0, iter = n * n;
//     ret += board[0][0];
//     int cnt = 0;
//     for (int i = 1; i < iter; i++)
//     {
//         vist[cx][cy] = 1;
//         cx += dx[cw][dir];
//         cy += dy[cw][dir];
//         // cout << n << ' ' << cx << " " << cy << ' ' << dir << '\n';
//         if (vist[cx][cy] || cx >= n || cx < 0 || cy >= n || cy < 0)
//         {
//             cx -= dx[cw][dir];
//             cy -= dy[cw][dir];
//             dir++;
//             i--;
//             dir %= 4;
//         }
//         else
//             ret += board[cx][cy];
//         // for (int j = 0; j < n; j++)
//         // {
//         //     for (int k = 0; k < n; k++)
//         //         cout << vist[j][k];
//         //     cout << '\n';
//         // }
//         // cout << "------\n";
//         // if (cnt++ > 40)
//         //     break;
//     }
//     return ret;
// }

// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int tc;
//     cin >> tc;
//     while (tc--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         vector<string> v;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> s;
//             for (int j = 0; j < n; j++)
//                 board[i][j] = s[j];
//         }

//         if (n == 1)
//             cout << s << ' ' << s << '\n';
//         else
//         {
//             for (int i = 0; i < 4; i++)
//             {
//                 v.emplace_back(fn(n, 0));
//                 v.emplace_back(fn(n, 1));
//                 rot(n);
//                 // cout << "------\n";
//                 // for (int j = 0; j < n; j++)
//                 // {
//                 //     for (int k = 0; k < n; k++)
//                 //         cout << board[j][k];
//                 //     cout << "\n";
//                 // }
//             }
//             sort(v.begin(), v.end());
//             cout << v.back() << ' ' << v.front() << '\n';
//         }
//     }

//     return 0;
// }

// problem: 소용돌이
// id: 23019
// time taken:
#include <bits/stdc++.h>
using namespace std;
const int BMAX = 26;
char board[BMAX][BMAX];
char vist[BMAX][BMAX];

int dx[2][4] = {{1, 0, -1, 0}, {0, 1, 0, -1}};
int dy[2][4] = {{0, 1, 0, -1}, {1, 0, -1, 0}};

void rot(int n)
{
    char t[BMAX][BMAX];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            t[i][j] = board[n - j - 1][i];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            board[i][j] = t[i][j];
    // copy(&board[0][0], &board[0][0] + n * n, &t[0][0]);
    return;
}

string fn(int x, int y, int n, int bn, bool ls)
{
    string ret1 = "", ret2 = "";
    int cx = x, cy = y, dir = 0, iter = (n - 1) * 4, cw = 0;
    ret1 += board[cx][cy];
    ret2 += board[cx][cy];
    for (int i = 1; i < iter; i++)
    {
        cx += dx[cw][dir];
        cy += dy[cw][dir];
        // cout << n << ' ' << cx << " " << cy << ' ' << dir << '\n';
        if (cx >= bn - x || cx < x || cy >= bn - y || cy < y)
        {
            cx -= dx[cw][dir];
            cy -= dy[cw][dir];
            dir++;
            i--;
            dir %= 4;
        }
        else
            ret1 += board[cx][cy];
        // cout << x << ' ' << y << ' ' << "ret1: " << ret1 << '\n';
    }
    cw = 1, cx = x, cy = y, dir = 0;
    for (int i = 1; i < iter; i++)
    {
        cx += dx[cw][dir];
        cy += dy[cw][dir];
        // cout << n << ' ' << cx << " " << cy << ' ' << dir << '\n';
        if (cx >= bn - x || cx < x || cy >= bn - y || cy < y)
        {
            cx -= dx[cw][dir];
            cy -= dy[cw][dir];
            dir++;
            i--;
            dir %= 4;
        }
        else
            ret2 += board[cx][cy];
        // cout << x << ' ' << y << ' ' << "ret2: " << ret2 << '\n';
    }
    if (ls)
        return (ret1 > ret2 ? ret1 : ret2);
    else
        return (ret1 < ret2 ? ret1 : ret2);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            for (int j = 0; j < n; j++)
                board[i][j] = s[j];
        }

        if (n == 1)
            cout << s << ' ' << s << '\n';
        else
        {
            int iter = n / 2 + n % 2;
            for (int i = 0; i < 4; i++)
            {
                string a = "", b = "";
                for (int j = 0; j < BMAX; j++)
                    fill(vist[j], vist[j] + BMAX, 0);
                for (int j = 0; j < iter; j++)
                    a += fn(j, j, n - j * 2, n, 0);
                for (int j = 0; j < BMAX; j++)
                    fill(vist[j], vist[j] + BMAX, 0);
                for (int j = 0; j < iter; j++)
                    b += fn(j, j, n - j * 2, n, 1);
                v.emplace_back(a);
                v.emplace_back(b);
                rot(n);
            }
            sort(v.begin(), v.end());
            cout << v.back() << ' ' << v.front() << '\n';
        }
    }

    return 0;
}
