// problem: Guarda Costeira
// id: 13655
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double d, vf, vg;
    while (cin >> d >> vf >> vg)
    {
        if (pow(d * d + 144.0, 0.5) / vg > 12 / vf)
            cout << "N\n";
        else
            cout << "S\n";
    }

    return 0;
}