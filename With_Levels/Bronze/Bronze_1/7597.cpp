// problem: Tennis
// id: 7597
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (true)
    {
        cin >> s;
        if (s == "#")
            break;
        int a, b, ca, cb;
        a = b = ca = cb = 0;
        for (auto i : s)
        {
            if (i == 'A')
                ca++;
            else
                cb++;
            if (ca >= 4 && ca - cb >= 2 || cb >= 4 && cb - ca >= 2)
            {
                if (ca > cb)
                    a++;
                else
                    b++;
                ca = cb = 0;
            }
        }
        cout << "A " << a << ' ' << "B " << b << '\n';
    }

    return 0;
}