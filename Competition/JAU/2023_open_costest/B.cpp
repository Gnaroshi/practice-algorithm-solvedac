// problem: B번 - 시프트 연산
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int *a = (int *)malloc(sizeof(int) * n);
    int *c = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    fill(c, c + n, 0);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            cnt++;
        else
            cnt = 0;
        c[i] = cnt;
    }
    int mx_cnt = 0;
    int mx_loc = 0;
    for (int i = 0; i < n; i++)
    {
        if (c[i] > mx_cnt)
        {
            mx_cnt = c[i];
            mx_loc = i;
        }
    }
    if (mx_cnt == 0)
    {
        cout << n << '\n';
        for (int i = 0; i < n; i++)
            cout << 'R';
        cout << '\n';
        return 0;
    }
    int mx_locf;
    for (int i = mx_loc; i >= 0; i--)
    {
        if (a[i] == 0)
            mx_locf = i;
        else
            break;
    }
    int lcnt = mx_locf;
    int rcnt = n - mx_loc - 1;
    // cout << mx_locf << ' ' << mx_loc << '\n';
    // cout << lcnt << ' ' << rcnt << '\n';
    if (lcnt < rcnt)
    {
        cout << 2 * mx_locf + (n - 1 - mx_loc) << '\n';
        for (int i = 0; i < mx_locf; i++)
            cout << 'L';

        for (int i = 0; i < n - mx_loc + mx_locf - 1; i++)
            cout << 'R';
    }
    else
    {
        cout << mx_locf + 2 * (n - 1 - mx_loc) << '\n';
        for (int i = mx_loc + 1; i < n; i++)
            cout << 'R';
        for (int i = 0; i < n - mx_loc + mx_locf - 1; i++)
            cout << 'L';
    }
    cout << '\n';

    return 0;
}