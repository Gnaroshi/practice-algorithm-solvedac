// problem: Edge
// id: 6546
// time taken:
#include <bits/stdc++.h>
using namespace std;
pair<int, int> dir[4] = {{10, 0}, {0, 10}, {-10, 0}, {0, -10}};
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (cin >> s)
    {
        cout << "300 420 moveto\n310 420 lineto\n";
        int iter = s.length();
        int x = 310, y = 420, cd = 0;
        for (int i = 0; i < iter; i++)
        {
            if (s[i] == 'V')
                cd++;
            else
                cd--;
            if (cd < 0)
                cd += 4;
            if (cd > 3)
                cd -= 4;
            x += dir[cd].first;
            y += dir[cd].second;
            cout << x << ' ' << y << " lineto\n";
        }

        cout << "stroke\nshowpage\n";
    }

    return 0;
}