// problem: Exercise
// id: 7602
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, e, cm = 1;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        cout << "Machine " << cm++ << '\n';
        vector<int> lv(n);
        for (auto &i : lv)
            cin >> i;
        string s;
        while (true)
        {
            cin >> s >> e;
            if (s == "#" && !e)
                break;
            int sm = 0, a, b;
            while (e--)
            {
                cin >> a >> b;
                sm += lv[a - 1] * b;
            }
            cout << s << ' ' << sm << '\n';
        }
    }

    return 0;
}