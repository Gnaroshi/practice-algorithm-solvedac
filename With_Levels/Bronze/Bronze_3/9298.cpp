// problem: Ant Entrapment
// id: 9298
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        int n;
        double mx, my, nx, ny;
        mx = my = -1001;
        nx = ny = 1001;
        double tx, ty;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> tx >> ty;
            if (tx > mx)
                mx = tx;
            if (tx < nx)
                nx = tx;
            if (ty > my)
                my = ty;
            if (ty < ny)
                ny = ty;
        }
        printf("Case %d: Area %.10lf, Perimeter %.10lf\n", i, (mx - nx) * (my - ny), 2 * (mx - nx + my - ny));
    }

    return 0;
}