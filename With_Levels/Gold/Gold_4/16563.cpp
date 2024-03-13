// problem: 어려운 소인수분해
// id: 16563
// time taken:
#include <bits/stdc++.h>
using namespace std;
const int MX = 5000000;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v(MX);
    for (int i = 2; i <= MX; i++)
        v[i] = i;
    for (int i = 2; i * i <= MX; i++)
    {
        if (v[i] == i)
        {
            for (int j = i * i; j <= MX; j += i)
            {
                if (v[j] == j)
                    v[j] = i;
            }
        }
    }
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        while (n > 1)
        {
            cout << v[n] << ' ';
            n /= v[n];
        }
        cout << '\n';
    }

    return 0;
}

