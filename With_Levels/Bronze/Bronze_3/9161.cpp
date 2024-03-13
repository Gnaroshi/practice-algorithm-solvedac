// problem: Sir Bedavere’s Bogus Division Solutions
// id: 9161
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 100; i < 1000; i++)
    {
        if (i % 111 == 0)
            continue;
        double di = double(i);
        for (int j = 100; j < 1000; j++)
        {
            if (j % 111 == 0)
                continue;

            double dj = double(j);
            if (i % 10 == j / 100)
            {
                if (di / dj == ((di - i % 10) / 10) / (double(j % 100)))
                    cout << i << " / " << j << " = " << int((di - i % 10) / 10) << " / " << j % 100 << '\n';
            }
        }
    }

    return 0;
}