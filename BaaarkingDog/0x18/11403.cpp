#include <bits/stdc++.h>
using namespace std;

#define MX 105

int n;
int nm[MX][MX];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> nm[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                if (nm[j][i] == 1 && nm[i][k] == 1)
                    nm[j][k] = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << nm[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}