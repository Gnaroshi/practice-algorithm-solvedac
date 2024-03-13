// problem: B번 - 회장님께 바치는 합성함수
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int f[3], g[2], p[3] = {0}, q[3] = {0}, a, b, c;
    for (int i = 0; i < 3; i++)
        cin >> f[i];
    for (int i = 0; i < 2; i++)
        cin >> g[i];

    // ax2+bx+c, dx+e -> a*(d2x2+2*dxe+e2)+ bdx+be + c
    // a(d2)(x2) + (2ade+bd)x + a(e2) + be + c
    // ad(x2) + bdx + cd + e
    p[0] = f[0] * g[0] * g[0];
    p[1] = 2 * f[0] * g[0] * g[1] + f[1] * g[0];
    p[2] = f[0] * g[1] * g[1] + f[1] * g[1] + f[2];
    q[0] = f[0] * g[0];
    q[1] = f[1] * g[0];
    q[2] = f[2] * g[0] + g[1];

    a = p[0] - q[0];
    b = p[1] - q[1];
    c = p[2] - q[2];

    if (!a && !b && !c)
        cout << "Nice";
    else if (!a && !b && c)
        cout << "Head on";
    else if (!a && b)
        cout << "Remember my character";
    else
    {
        int d = b * b - 4 * a * c;
        if (d > 0)
            cout << "Go ahead";
        else if (d == 0)
            cout
                << "Remember my character";
        else
            cout << "Head on";
    }

    return 0;
}