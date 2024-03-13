#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int cnts[1000001];
    fill(cnts, cnts + 1000001, 0);
    cnts[0] = 0;
    cnts[1] = 0;
    cnts[2] = 1;
    cnts[3] = 1;
    for (int i = 4; i < 1000001; i++)
    {
        cnts[i] = cnts[i - 1] + 1;
        if (i % 3 == 0)
        {
            cnts[i] = min(cnts[i], cnts[i / 3] + 1);
        }
        if (i % 2 == 0)
        {
            cnts[i] = min(cnts[i], cnts[i / 2] + 1);
        }
    }
    cout << cnts[n] << '\n';

    return 0;
}