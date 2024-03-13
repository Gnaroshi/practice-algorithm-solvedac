// problem: Magic Squares
// id: 14039
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int brd[4][4];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> brd[i][j];
    int c[8] = {0};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            c[i] += brd[i][j];
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            c[j + 4] += brd[i][j];
    }
    int m = c[0];
    for (int i = 1; i < 8; i++)
    {
        if (c[i] != m)
        {
            cout << "not magic";
            return 0;
        }
    }
    cout << "magic";

    return 0;
}