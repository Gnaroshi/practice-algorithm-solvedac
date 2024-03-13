// problem: Chessboard
// id: 13240
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if ((i + j) % 2 == 0)
                cout << '*';
            else
                cout << '.';
        }
        cout << '\n';
    }

    return 0;
}