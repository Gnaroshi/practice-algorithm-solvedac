// problem: Jazz Enthusiast
// id: 18063
// time taken:
#include <bits/stdc++.h>
using namespace std;
int n, c, s;

int main(void)
{

    string st;
    cin >> n >> c;
    for (int i = 0; i < n; i++)
    {
        cin >> st;
        s += (st[0] - '0') * 60 + (st[2] - '0') * 10 + st[3] - '0';
    }
    s -= max(0, n - 1) * c;
    printf("%02d:%02d:%02d", s / 3600, (s % 3600) / 60, (s % 3600) % 60);

    return 0;
}