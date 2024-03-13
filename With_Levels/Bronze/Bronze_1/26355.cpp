// problem: Sorry About That, Chief!
// id: 26355
// time taken:
#include <bits/stdc++.h>
using namespace std;
const int MX = 20000;

vector<int> p;
bool isp[MX];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    fill(isp, isp + MX, 1);
    for (int i = 2; i < MX; i++)
    {
        if (isp[i])
            p.push_back(i);
        for (auto j : p)
        {
            if (i * j >= MX)
                break;
            isp[i * j] = 0;
            if (i % j == 0)
                break;
        }
    }
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, mnd = 0x3f3f3f3f, l = 0;
        cin >> n;
        cout << "Input value: " << n << "\n";
        if (isp[n])
        {
            cout << "Would you believe it; it is a prime!\n\n";
            continue;
        }
        for (auto i : p)
        {
            if (abs(n - i) < mnd)
                mnd = abs(n - i);
        }
        cout << "Missed it by that much (" << mnd << ")!\n\n";
    }

    return 0;
}