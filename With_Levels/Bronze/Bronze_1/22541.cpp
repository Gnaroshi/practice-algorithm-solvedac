// problem: Sum of Consecutive Integers
// id: 22541
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        int cnt = 0, l = 2;
        while (true)
        {
            if ((l + 1) * l / 2 > n)
                break;
            for (int i = 0; i < n / l + 1; i++)
            {
                if ((l + 1) * l / 2 + l * i == n)
                {
                    cnt++;
                    break;
                }
            }
            l++;
        }
        cout << cnt << '\n';
    }

    return 0;
}