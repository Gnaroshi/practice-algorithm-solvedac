#include <bits/stdc++.h>
using namespace std;

int tc, n;
int arr[2][100005];
int ans[2][100005];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> tc;
    while (tc--)
    {
        for (int i = 0; i < 2; i++)
        {
            fill(arr[i], arr[i] + 100005, 0);
            fill(ans[i], ans[i] + 100005, 0);
        }
        // int ans = 0;
        cin >> n;
        for (int j = 0; j < 2; j++)
            for (int i = 0; i < n; i++)
                cin >> arr[j][i];

        ans[0][0] = arr[0][0];
        ans[1][0] = arr[1][0];
        ans[0][1] = arr[0][1] + arr[1][0];
        ans[1][1] = arr[1][1] + arr[0][0];

        for (int i = 2; i < n; i++)
        {
            ans[0][i] = arr[0][i] + max(ans[1][i - 1], ans[1][i - 2]);
            ans[1][i] = arr[1][i] + max(ans[0][i - 1], ans[0][i - 2]);
        }
        int ans_u = ans[0][n - 1];
        int ans_d = ans[1][n - 1];
        if (ans_u > ans_d)
            cout << ans_u << '\n';
        else
            cout << ans_d << '\n';
    }

    return 0;
}