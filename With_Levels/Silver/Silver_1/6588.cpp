// problem: 골드바흐의 추측
// id: 6588
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool isp[1000001];
vector<int> p;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    fill(isp, isp + 1000001, 1);
    for (int i = 2; i < 1000001; i++)
    {
        if (isp[i])
            p.push_back(i);
        for (auto j : p)
        {
            if (i * j >= 1000001)
                break;
            isp[i * j] = 0;
            if (i % j == 0)
                break;
        }
    }

    int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        for (auto i : p)
        {
            if (isp[i] && isp[n - i])
            {
                cout << n << " = " << i << " + " << n - i << '\n';
                break;
            }
        }
    }

    return 0;
}