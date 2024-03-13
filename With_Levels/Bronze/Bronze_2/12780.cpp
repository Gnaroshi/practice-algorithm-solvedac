// problem: 원피스
// id: 12780
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string h, n;
    cin >> h >> n;
    int iter = h.length(), nl = n.length(), cnt = 0;
    char fc = n[0];
    iter -= nl - 1;
    for (int i = 0; i < iter; i++)
    {
        if (h[i] == fc)
            if (h.substr(i, nl) == n)
                cnt++;
    }
    cout << cnt;

    return 0;
}