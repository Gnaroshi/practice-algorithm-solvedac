// problem: Ромб
// id: 27220
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, k;
    cin >> n >> a >> b;
    char **brd = (char **)malloc(sizeof(bool *) * n + 1);
    for (int i = 0; i < n + 1; i++)
    {
        brd[i] = (char *)malloc(sizeof(char) * n + 1);
        fill(brd[i], brd[i] + n + 1, '.');
    }
    k = (n - 1) / 2;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (abs(i - k) + abs(j - k) <= b)
                brd[i][j] = '*';
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (abs(i - k) + abs(j - k) <= a - 1)
                brd[i][j] = '.';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << brd[i][j];
        cout << '\n';
    }

    return 0;
}