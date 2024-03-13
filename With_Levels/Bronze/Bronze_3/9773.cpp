// problem: ID Key
// id: 9773
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        int t = 0, iter = s.length();
        for (int i = 0; i < iter; i++)
        {
            t += s[i] - '0';
        }
        t += ((s[10] - '0') * 100 + (s[11] - '0') * 10 + (s[12] - '0')) * 10;
        if (t < 1000)
            t += 1000;
        printf("%04d\n", t % 10000);
    }
    return 0;
}