// problem: Шахматная доска
// id: 27239
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    bool br = false;
    for (int i = 0; i < 8; i++)
    {
        if (br)
            break;
        for (int j = 1; j <= 8; j++)
        {
            if (i * 8 + j == n)
            {
                cout << char(j + 'a' - 1) << i + 1;
                br = true;
                break;
            }
        }
    }

    return 0;
}