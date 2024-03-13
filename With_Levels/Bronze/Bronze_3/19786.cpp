// problem: Ставка
// id: 16786
// time taken:
#include <bits/stdc++.h>
using namespace std;

int func(int a, int c, int rgb[3])
{
    return a * (rgb[0] * rgb[0] + rgb[1] * rgb[1] + rgb[2] * rgb[2]) + c * min(min(rgb[0], rgb[1]), rgb[2]);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, c;
        int rgb[3];
        int mx = -1;
        int mxl = 0;
        cin >> a >> c;
        for (int i = 0; i < 3; i++)
            cin >> rgb[i];
        for (int i = 0; i < 3; i++)
        {
            rgb[i]++;
            int t = func(a, c, rgb);
            if (mx < t)
            {
                mx = t;
                mxl = i;
            }
            rgb[i]--;
        }
        if (mxl == 0)
            cout << "RED";
        else if (mxl == 1)
            cout << "GREEN";
        else
            cout << "BLUE";
        cout << '\n';
    }

    return 0;
}