// problem: Logical Functions: AND-OR
// id: 11264
// time taken:
#include <bits/stdc++.h>
using namespace std;

int x[4] = {0, 1, 0, 1};
int y[4] = {0, 0, 1, 1};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        double w1, w2, b;
        cin >> s >> w1 >> w2 >> b;
        bool chk = true;
        if (s == "AND")
        {
            if (w1 + w2 + b < 0)
                chk = false;
            else
            {
                for (int i = 0; i < 3; i++)
                {
                    if (x[i] * w1 + y[i] * w2 + b >= 0)
                    {
                        chk = false;
                        break;
                    }
                }
            }
        }
        else
        {
            if (b >= 0)
                chk = false;
            else
            {
                for (int i = 1; i < 4; i++)
                {
                    if (x[i] * w1 + y[i] * w2 + b < 0)
                    {
                        chk = false;
                        break;
                    }
                }
            }
        }
        cout << (chk ? "true\n" : "false\n");
    }

    return 0;
}