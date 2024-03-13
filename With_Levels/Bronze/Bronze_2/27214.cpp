// problem: Сетка
// id: 27214
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, w, h, t, c;
    cin >> k >> w >> h >> t;
    c = t * (w + 1) + k * w;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < c; j++)
            cout << '*';
        cout << '\n';
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < k; j++)
        {
            for (int ii = 0; ii < w; ii++)
            {
                for (int a = 0; a < t; a++)
                    cout << '*';
                for (int a = 0; a < k; a++)
                    cout << '.';
            }
            for (int a = 0; a < t; a++)
                cout << '*';
            cout << '\n';
        }
        for (int ii = 0; ii < t; ii++)
        {
            for (int j = 0; j < c; j++)
                cout << '*';
            cout << '\n';
        }
    }

    return 0;
}