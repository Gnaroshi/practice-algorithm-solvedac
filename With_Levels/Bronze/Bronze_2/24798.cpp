// problem: The Weight Of Words
// id: 24798
// time taken:
#include <bits/stdc++.h>
using namespace std;
int l, w;

bool chk(char *st)
{
    int s = 0;
    for (int i = 0; i < l; i++)
    {
        s += st[i] - 'a' + 1;
    }
    if (s == w)
        return true;
    return false;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> l >> w;
    char *sw = (char *)malloc(sizeof(char) * l);
    fill(sw, sw + l, 'a');

    if (w > l * 26 || w < l)
    {
        cout << "impossible";
        return 0;
    }

    bool fnd = false;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < 25; j++)
        {
            if (chk(sw))
            {
                fnd = true;
                break;
            }
            sw[i]++;
        }
        if (fnd)
            break;
    }
    for (int i = 0; i < l; i++)
        cout << sw[i];

    return 0;
}