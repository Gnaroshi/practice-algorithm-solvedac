// #include <bits/stdc++.h>
// using namespace std;

// vector<int> v;

// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int a, b;
//     cin >> a >> b;
//     int ans = 0;
//     int iter = (1 + 45) * (45) / 2;
//     for (int i = 1; i <= iter; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             v.push_back(i);
//         }
//     }
//     for (int i = a; i <= b; i++)
//     {
//         ans += v[i - 1];
//     }

//     cout << ans << '\n';

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int *board = (int *)malloc(sizeof(int) * (b + 1));
    int cnt = 0;
    int adds = 1;
    for (int i = 1; i <= b; i++)
    {
        if (cnt == adds)
        {
            adds += 1;
            cnt = 0;
        }
        board[i] = board[i - 1] + adds;
        cnt++;
    }
    cout << board[b] - board[a - 1] << '\n';

    return 0;
}