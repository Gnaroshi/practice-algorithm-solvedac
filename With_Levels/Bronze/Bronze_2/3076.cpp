// problem: 상근이의 체스판
// id: 3076
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, c, a, b;
    cin >> r >> c >> a >> b;
    for (int i = 0; i < r; i++)
    {
        for (int ii = 0; ii < a; ii++)
        {
            for (int j = 0; j < c; j++)
            {
                for (int jj = 0; jj < b; jj++)
                {
                    if ((i + j) % 2)
                        cout << '.';
                    else
                        cout << 'X';
                }
            }
            cout << '\n';
        }
    }

    return 0;
}