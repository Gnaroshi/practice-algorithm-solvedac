// problem: Hotelier
// id: 27481
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r[10] = {0};
    int n, iter;
    string s;
    cin >> n >> s;
    iter = s.length();
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == 'L')
        {
            for (int j = 0; j < 10; j++)
            {
                if (r[j] == 0)
                {
                    r[j] = 1;
                    break;
                }
            }
        }
        else if (s[i] == 'R')
        {
            for (int j = 9; j >= 0; j--)
            {
                if (r[j] == 0)
                {
                    r[j] = 1;
                    break;
                }
            }
        }
        else
        {
            r[s[i] - '0'] = 0;
        }
    }
    for (int j = 0; j < 10; j++)
        cout << r[j];

    return 0;
}