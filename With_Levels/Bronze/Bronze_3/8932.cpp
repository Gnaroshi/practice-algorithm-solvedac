// problem: 7종 경기
// id: 8932
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    double a[7] = {9.23076, 1.84523, 56.0211, 4.99087, 0.188807, 15.9803, 0.11193};
    double b[7] = {26.7, 75, 1.5, 42.5, 210, 3.8, 254};
    double c[7] = {1.835, 1.348, 1.05, 1.81, 1.41, 1.04, 1.88};
    while (tc--)
    {
        double n[7];
        for (int i = 0; i < 7; i++)
            cin >> n[i];
        int ans = 0;
        for (int i = 0; i < 7; i++)
        {
            if (i % 3 == 0)
                ans += int(a[i] * pow(b[i] - n[i], c[i]));
            else
                ans += int(a[i] * pow(n[i] - b[i], c[i]));
        }
        cout << ans << '\n';
    }
    return 0;
}