// problem: Tokyo2020
// id: 24175
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        int md[130] = {0}, mdg[130] = {0}, y;
        string s, t;
        while (n--)
        {
            cin >> y >> s >> t;
            if (t[0] == 'G')
                mdg[y - 1896]++;
            md[y - 1896]++;
        }
        cout << max_element(mdg, mdg + 130) - mdg + 1896 << ' ' << max_element(md, md + 130) - md + 1896 << '\n';
    }

    return 0;
}