// problem: 직각 삼각형의 두 변
// id: 6322
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int tc = 1;
    while (true)
    {
        double a, b, c;
        int unk = 0;
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
            break;
        bool chk = true;
        double ans = 0;
        if (a == -1)
        {
            if (c * c - b * b <= 0)
                chk = false;
            if (c <= 0 || b <= 0)
                chk = false;
            unk = 0;
            ans = sqrt(c * c - b * b);
        }
        else if (b == -1)
        {
            if (c * c - a * a <= 0)
                chk = false;
            if (c <= 0 || a <= 0)
                chk = false;
            unk = 1;
            ans = sqrt(c * c - a * a);
        }
        else if (c == -1)
        {
            if (a <= 0 || b <= 0)
                chk = false;
            unk = 2;
            ans = sqrt(a * a + b * b);
        }
        if (chk)
            printf("Triangle #%d\n%c = %.3lf\n\n", tc++, 'a' + unk, ans);
        else
            printf("Triangle #%d\nImpossible.\n\n", tc++);
    }

    return 0;
}