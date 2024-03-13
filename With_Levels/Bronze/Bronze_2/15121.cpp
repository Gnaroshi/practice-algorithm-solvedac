// problem: Star Arrangements
// id: 15121
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s;
    cin >> s;
    cout << s << ":\n";
    for (int i = 2; i <= s / 2 + 1; i++)
    {
        for (int j = i - 1; j <= i; j++)
        {
            int t = i;
            int c = 1;
            while (t <= s)
            {
                if (t == s)
                {
                    cout << i << ',' << j << '\n';
                    break;
                }
                if (c)
                    t += j;
                else
                    t += i;
                c = (c + 1) % 2;
            }
        }
    }

    return 0;
}