// problem: Arrival Time
// id: 14041
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int t, a = 0;
    bool tog = 0;
    string s;
    cin >> s;
    t = ((s[0] - '0') * 10 + s[1] - '0') * 60 + (s[3] - '0') * 10 + s[4] - '0';
    for (int i = 0; i < 120; i++)
    {
        if ((t >= 420 && t < 600) || (t >= 900 && t < 1140))
        {
            if (tog)
            {
                t++;
                tog = 0;
            }
            else
            {
                tog = 1;
                t++;
                i--;
            }
        }
        else
            t++;
    }
    t %= 1440;
    printf("%02d:%02d", t / 60, t % 60);

    return 0;
}