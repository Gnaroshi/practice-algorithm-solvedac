#include <bits/stdc++.h>
using namespace std;

int n;
int D[1000001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    D[1] = 0;

    for (int i = 2; i <= n; i++)
    {
        int cal3, cal2, cal1;
        bool is3 = false;
        bool is2 = false;

        if (i % 3 == 0)
        {
            cal3 = D[i / 3] + 1;
            is3 = true;
        }
        if (i % 2 == 0)
        {
            cal2 = D[i / 2] + 1;
            is2 = true;
        }
        cal1 = D[i - 1] + 1;

        if (is3 && is2)
            D[i] = min(cal3, min(cal2, cal1));
        else if (is3)
            D[i] = min(cal3, cal1);
        else if (is2)
            D[i] = min(cal2, cal1);
        else
            D[i] = cal1;
    }

    cout << D[n] << '\n';

    return 0;
}