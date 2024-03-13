// problem: Math Homework
// id: 24807
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int b, d, c, l;
    cin >> b >> d >> c >> l;
    int iter = l / min(min(b, d), c) + 1;
    bool chk = true;
    for (int i = 0; i < iter; i++)
    {
        for (int j = 0; j < iter; j++)
        {
            for (int k = 0; k < iter; k++)
            {
                if (i * b + j * d + k * c == l)
                {
                    chk = false;
                    cout << i << ' ' << j << ' ' << k << '\n';
                }
            }
        }
    }

    if (chk)
        cout << "impossible";

    return 0;
}
