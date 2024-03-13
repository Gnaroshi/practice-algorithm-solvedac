// problem: 길면 기차, 기차는 빨라, 빠른 것은 비행기
// id: 9493
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double m, a, b, aa, bb;
    int t;
    while (true)
    {
        cin >> m >> a >> b;
        if (m + a + b == 0)
            break;
        aa = m / a * 3600;
        bb = m / b * 3600;
        t = round(abs(aa - bb));
        cout << t / 3600 << ":";
        t %= 3600;
        if (t / 60 < 10)
            cout << 0;
        cout << t / 60 << ":";
        if (t % 60 < 10)
            cout << 0;
        cout << t % 60 << '\n';
    }

    return 0;
}