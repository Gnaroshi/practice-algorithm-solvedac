// problem: 루트
// id: 4619
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int b, n;
    while (true)
    {
        cin >> b >> n;
        if (b + n == 0)
            break;
        int gap = b;
        for (int i = 0; i <= b + 1; i++)
        {
            int t = abs(b - pow(i, n));
            if (t <= gap)
            {
                gap = t;
            }
            else
            {
                cout << i - 1 << '\n';
                break;
            }
        }
    }

    return 0;
}