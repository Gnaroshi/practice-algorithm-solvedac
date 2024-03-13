// problem: Jazz it Up!
// id: 17791
// time taken:
#include <bits/stdc++.h>
using namespace std;

vector<int> p;
bool isp[10005];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    fill(isp, isp + 10005, 1);
    for (int i = 2; i < 10005; i++)
    {
        if (isp[i])
            p.push_back(i);
        for (auto j : p)
        {
            if (i * j >= 10005)
                break;
            isp[i * j] = false;
            if (i % j == 0)
                break;
        }
    }

    int n;
    cin >> n;
    for (auto i : p)
    {
        if (n % i)
        {
            cout << i;
            break;
        }
    }

    return 0;
}