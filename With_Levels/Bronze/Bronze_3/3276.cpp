// problem: ICONS
// id: 3276
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int r = 1, c = 1;
    bool sw = true;
    while (true)
    {
        if (r * c >= n)
        {
            cout << r << ' ' << c;
            return 0;
        }
        if (sw)
            r++;
        else
            c++;
        sw = !sw;
    }

    return 0;
}