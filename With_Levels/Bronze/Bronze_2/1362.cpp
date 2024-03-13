#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int c = 1;
    while (true)
    {
        float o, w;
        cin >> w >> o;
        if (o == 0 && w == 0)
            break;
        bool isDead = false;
        while (true)
        {
            char a;
            float n;
            cin >> a;
            cin >> n;

            if (a == '#' && n == 0)
            {
                if (isDead)
                    cout << c << " RIP\n";
                else if (o < 2.0 * w && o > w / 2.0)
                    cout << c << " :-)\n";
                else
                    cout << c << " :-(\n";
                c++;
                break;
            }
            else if (a == 'F')
            {
                o += n;
            }
            else if (a == 'E')
            {
                o -= n;
            }

            if (o <= 0)
            {
                isDead = true;
            }
        }
    }

    return 0;
}