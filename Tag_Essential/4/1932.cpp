// #include <bits/stdc++.h>
// using namespace std;

// #define MX 505

// int n;
// int arr[MX][MX];
// int ans[MX][MX];

// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//             cin >> arr[i][j];
//     }
//     for (int i = 0; i < n; i++)
//         fill(ans[i], ans[i] + n, 0);

//     ans[0][0] = arr[0][0];
//     stack<pair<int, int>> q;
//     q.push({0, 0});

//     while (!q.empty())
//     {
//         auto cur = q.top();
//         q.pop();

//         int x = cur.first;
//         int y = cur.second;
//         // cout << "(" << x << ", " << y << ")\n";
//         int temp = ans[x][y];

//         if (x + 1 > n)
//             continue;
//         // if (y - 1 >= 0)
//         // {

//         // }
//         q.push({x + 1, y});
//         if (ans[x + 1][y] < temp + arr[x + 1][y])
//         {
//             ans[x + 1][y] = temp + arr[x + 1][y];
//         }
//         if (y + 1 < n)
//         {
//             q.push({x + 1, y + 1});
//             if (ans[x + 1][y + 1] < temp + arr[x + 1][y + 1])
//             {
//                 ans[x + 1][y + 1] = temp + arr[x + 1][y + 1];
//             }
//         }
//     }

//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = 0; j <= i; j++)
//     //         cout << ans[i][j] << ' ';
//     //     cout << '\n';
//     // }

//     int mx = -1;
//     for (int i = 0; i < n; i++)
//         if (mx < ans[n - 1][i])
//             mx = ans[n - 1][i];

//     cout << mx << '\n';

//     return 0;
// }
// stack: 시간 초과, queue: 메모리 초과

#include <bits/stdc++.h>
using namespace std;

#define MX 505

int arr[MX][MX];
int n;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            cin >> arr[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
                arr[i][j] = arr[i - 1][j] + arr[i][j];
            else if (j == i)
                arr[i][j] = arr[i - 1][j - 1] + arr[i][j];
            else
                arr[i][j] = max(arr[i - 1][j - 1] + arr[i][j], arr[i - 1][j] + arr[i][j]);
        }

    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[n - 1][i]);
    }
    cout << mx << '\n';

    return 0;
}