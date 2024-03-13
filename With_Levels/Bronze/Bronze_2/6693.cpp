// problem: Complicated Route
// id: 6693
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed;
    cout.precision(3);

    string s, t;
    while (true)
    {
        cin >> s;
        if (s == "END")
            break;
        int iter = s.length() - 1;
        s = s.substr(0, iter);
        for (int i = 0; i < iter; i++)
        {
            if (s[i] == ',')
                s[i] = ' ';
        }
        stringstream st;
        st.str(s);

        double x, y, d;
        x = y = 0;

        while (st >> t)
        {
            int l = t.length() - 1;
            if (isdigit(t[l - 1]))
            {
                double mv = double(stoi(t.substr(0, l)));
                if (t[l] == 'N')
                    y += mv;
                else if (t[l] == 'S')
                    y -= mv;
                else if (t[l] == 'E')
                    x += mv;
                else
                    x -= mv;
            }
            else
            {
                double mv = double(stoi(t.substr(0, l - 1))) / sqrt(2.0);
                string dir = t.substr(l - 1, 2);
                if (dir == "NE")
                {
                    x += mv;
                    y += mv;
                }
                else if (dir == "NW")
                {
                    x -= mv;
                    y += mv;
                }
                else if (dir == "SE")
                {
                    x += mv;
                    y -= mv;
                }
                else if (dir == "SW")
                {
                    x -= mv;
                    y -= mv;
                }
            }
        }

        cout << "You can go to (" << x << "," << y << "), the distance is " << sqrt(x * x + y * y) << " steps.\n";
    }

    return 0;
}