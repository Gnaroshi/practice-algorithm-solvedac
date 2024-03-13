// problem: 방 배정하기
// id: 14697
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, n;
    cin >> a >> b >> c >> n;
    for (int i = 0; i < 300; i++)
    {
        if (i * a > n)
            break;
        for (int j = 0; j < 300; j++)
        {
            if (i * a + j * b > n)
                break;
            for (int k = 0; k < 300; k++)
            {
                if (i * a + j * b + k * c > n)
                    break;
                if (i * a + j * b + k * c == n)
                {
                    cout << 1;
                    return 0;
                }
            }
        }
    }

    cout << 0;

    return 0;
}