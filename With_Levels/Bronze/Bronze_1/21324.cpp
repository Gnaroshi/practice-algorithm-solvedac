// problem: Mars Message
// id: 21324
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    double a, b;

    cin >> n;
    n /= 2;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        t = int(a / 22.5) * 16 + int(b / 22.5);
        cout << char(t);
    }

    return 0;
}