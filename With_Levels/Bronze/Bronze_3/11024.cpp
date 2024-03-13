// problem: 더하기 4
// id: 11024
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--)
    {
        int s = 0;
        while (true)
        {
            char t;
            bool es = false;
            int te = 0;
            while (true)
            {
                cin.get(t);
                if (t == '\n')
                {
                    es = true;
                    s += te;
                    break;
                }
                if (t == ' ')
                {
                    s += te;
                    te = 0;
                    continue;
                }
                te *= 10;
                te += t - '0';
            }
            if (es)
                break;
        }
        cout << s << '\n';
    }

    return 0;
}