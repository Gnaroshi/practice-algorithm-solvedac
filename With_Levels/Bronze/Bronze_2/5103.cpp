// problem: DVDs
// id: 5103
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string sc;
    int m, s, t;
    while (true)
    {
        cin >> sc;
        if (sc == "#")
            break;
        cin >> m >> s >> t;
        for (int i = 0; i < t; i++)
        {
            char tr;
            int n;
            cin >> tr >> n;
            if (tr == 'S')
                s = max(0, s - n);
            else
                s = min(m, s + n);
        }
        cout << sc << ' ' << s << '\n';
    }

    return 0;
}