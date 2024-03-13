// problem: Sunflowers
// id: 16020
// time taken:
#include <bits/stdc++.h>
using namespace std;

int brd[100][100];
int nbrd[100][100];
int n;
void fn()
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            nbrd[i][j] = brd[n - j - 1][i];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            brd[i][j] = nbrd[i][j];
    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> brd[i][j];
    int rc = 0;
    if (brd[0][0] < brd[0][n - 1])
    {
        if (brd[0][0] > brd[n - 1][0])
            rc = 1;
    }
    else
    {
        if (brd[0][0] < brd[n - 1][0])
            rc = 3;
        else
            rc = 2;
    }
    for (int i = 0; i < rc; i++)
        fn();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << brd[i][j] << ((j != n - 1) ? ' ' : '\n');
    }

    return 0;
}