// problem: Movie
// id: 9670
// time taken:
#include <bits/stdc++.h>
using namespace std;

int p[8] = {319, 419, 450, 519, 599, 600, 630, 719};
double rx[8] = {1024, 1024, 960, 2048, 1136, 1280, 1080, 1136};
double ry[8] = {768, 600, 640, 1536, 640, 800, 1920, 640};
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double w, h, a, b, mx, tmx;
    int l;
    while (true)
    {
        cin >> w >> h;
        if (w + h == 0)
            break;
        tmx = mx = l = 0;
        for (int i = 0; i < 8; i++)
        {
            a = int(rx[i] * h / w) / ry[i];
            b = int(ry[i] * w / h) / rx[i];
            if (rx[i] * h == ry[i] * w)
                tmx = max(a, b);
            else
                tmx = min(a, b);
            // cout << i << ' ' << a << ' ' << b << ' ' << tmx << "\n";
            a = int(rx[i] * w / h) / ry[i];
            b = int(ry[i] * h / w) / rx[i];
            if (rx[i] * w == ry[i] * h)
                tmx = max(tmx, max(a, b));
            else
                tmx = max(tmx, min(a, b));
            // cout << i << ' ' << a << ' ' << b << ' ' << tmx << "\n";
            // cout << "mx: " << mx << '\n';

            if (tmx > mx)
            {
                mx = tmx;
                l = i;
            }
        }
        cout << p[l] << '\n';
    }

    return 0;
}