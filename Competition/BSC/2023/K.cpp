// problem: K번 - 비밀번호 찾기
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m, x, y, c, ac = 0, bc = 0, tr = 1, yc;
    int chk[10] = {0};
    cin >> n >> m >> x >> y;
    c = 9;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a)
        {
            chk[b] = 2;
            n--;
            ac++;
        }
        else
        {
            if (chk[b] == 0)
            {
                bc++;
            }
        }
    }
    int t = 9 - ac - bc, mg = n - bc, un = 1;
    for (int i = 1; i <= t; i++)
        un *= i;
    for (int i = 1; i <= mg; i++)
        un /= i;
    for (int i = 1; i <= (t - mg); i++)
        un /= i;
    tr *= un;
    for (int i = n; i > 0; i--)
        tr *= i;

    yc = max(tr / 3 + ((tr % 3) ? 0 : -1), 0LL);
    cout << tr * x + yc * y;

    return 0;
}