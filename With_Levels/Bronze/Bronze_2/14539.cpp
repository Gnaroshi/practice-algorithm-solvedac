// problem: Grid Pattern
// id: 14539
// time taken:
#include <bits/stdc++.h>
using namespace std;

void bt(int c, int w)
{
    for (int i = 0; i < c; i++)
    {
        cout << '+';
        for (int j = 0; j < w; j++)
            cout << '-';
    }
    cout << "+\n";
    return;
}

void ir(int c, int w)
{
    for (int i = 0; i < c; i++)
    {
        cout << '|';
        for (int j = 0; j < w; j++)
            cout << '*';
    }
    cout << "|\n";
    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Case #" << tcc << ":\n";
        int r, c, w, h;
        cin >> r >> c >> w >> h;
        for (int i = 0; i < r; i++)
        {
            bt(c, w);
            for (int j = 0; j < h; j++)
                ir(c, w);
        }
        bt(c, w);
    }

    return 0;
}