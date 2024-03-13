// problem: Dressing Up
// id: 6929
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, m;
    cin >> h;
    m = h / 2 + 1;
    for (int i = 1; i <= h; i++)
    {
        if (i == m)
        {
            for (int j = 0; j < (i * 2 - 1) * 2; j++)
                cout << '*';
            cout << '\n';
        }
        else
        {
            int t = abs(m - abs(i - m));
            int iter = t * 2 - 1, b = (h - iter) * 2;
            for (int j = 0; j < iter; j++)
                cout << '*';
            for (int j = 0; j < b; j++)
                cout << ' ';
            for (int j = 0; j < iter; j++)
                cout << '*';
            cout << '\n';
        }
    }

    return 0;
}