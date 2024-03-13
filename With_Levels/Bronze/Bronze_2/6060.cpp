// problem: Wheel Rotation
// id: 6060
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t = 0;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int s, d;
        bool c;
        cin >> s >> d >> c;
        t += c;
    }
    cout << t % 2;

    return 0;
}