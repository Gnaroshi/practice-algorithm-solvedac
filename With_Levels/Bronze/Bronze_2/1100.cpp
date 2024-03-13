#include <bits/stdc++.h>
using namespace std;

char board[8][8];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int ans = 0;
    for (int i = 0; i < 8; i++)
    {
        string temp;
        cin >> temp;
        for (int j = 0; j < 8; j++)
        {
            if ((i + j) % 2 == 0 && temp[j] == 'F')
                ans += 1;
        }
    }
    cout << ans << '\n';

    return 0;
}