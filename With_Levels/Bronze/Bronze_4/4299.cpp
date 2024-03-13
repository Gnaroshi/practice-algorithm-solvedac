#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;

    int x, y;
    bool isFound = false;
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            if (i + j == a && abs(i - j) == b)
            {
                cout << max(i, j) << " " << min(i, j) << '\n';
                isFound = true;
                break;
            }
            if (isFound)
                break;
        }
    }
    if (!isFound)
        cout << -1 << '\n';

    return 0;
}
