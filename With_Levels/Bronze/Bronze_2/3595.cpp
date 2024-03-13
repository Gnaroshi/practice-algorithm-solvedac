// problem: 맥주 냉장고
// id: 3595
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, c, mn = 0x3f3f3f3f;
    cin >> n;
    vector<int> v;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (i != n / i)
                v.push_back(n / i);
        }
    }
    int iter = v.size();
    for (auto i : v)
    {
        for (auto j : v)
        {
            for (auto k : v)
            {
                if (i * j * k == n)
                {
                    int t = 2 * (i * j + j * k + k * i);
                    if (t < mn)
                    {
                        a = i;
                        b = j;
                        c = k;
                        mn = t;
                    }
                }
            }
        }
    }
    cout << a << ' ' << b << ' ' << c;

    return 0;
}