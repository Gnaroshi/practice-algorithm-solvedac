// problem: Color Me Less
// id: 6367
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, g, b, cr, cg, cb;
    vector<tuple<int, int, int>> v;
    for (int i = 0; i < 16; i++)
    {
        cin >> r >> g >> b;
        v.push_back({r, g, b});
    }
    while (true)
    {
        cin >> r >> g >> b;
        if (r + g + b < 0)
            break;
        int ret = 0, mx = 0x3f3f3f3f, t;
        for (int i = 0; i < 16; i++)
        {
            tie(cr, cg, cb) = v[i];
            t = ((r - cr) * (r - cr) + (g - cg) * (g - cg) + (b - cb) * (b - cb));
            if (mx > t)
            {
                mx = t;
                ret = i;
            }
        }
        tie(cr, cg, cb) = v[ret];
        cout << "(" << r << "," << g << "," << b << ") maps to (" << cr << "," << cg << "," << cb << ")\n";
    }

    return 0;
}