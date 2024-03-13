// problem: 팬케이크 사랑
// id: 2520
// time taken:
#include <bits/stdc++.h>
using namespace std;
double mt[5] = {8, 8, 4, 1, 9};
int tp[4] = {1, 30, 25, 10};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        double a[5];
        int b[4];
        for (int i = 0; i < 5; i++)
            cin >> a[i];
        for (int i = 0; i < 5; i++)
            a[i] /= mt[i];
        for (int i = 0; i < 4; i++)
            cin >> b[i];
        int cnt = b[0];
        for (int i = 1; i < 4; i++)
            cnt += b[i] / tp[i];
        cout << min(int(floor(*min_element(a, a + 5) * 16)), cnt) << '\n';
    }

    return 0;
}