// problem: Biorhythms
// id: 9182
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int tcc = 1;; tcc++)
    {
        int p, e, i, d;
        cin >> p >> e >> i >> d;
        if (p + e + i + d == -4)
            break;
        for (int j = d + 1; j < 21253 + d; j++)
        {
            if (j % 23 == p % 23 && j % 28 == e % 28 && j % 33 == i % 33)
            {
                cout << "Case " << tcc << ": the next triple peak occurs in " << j - d << " days.\n";
                break;
            }
        }
    }

    return 0;
}