#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, w, h, l;
    cin >> n >> w >> h >> l;
    int cnt = 0;
    cnt = (w / l) * (h / l);
    cout << min(n, cnt) << '\n';

    return 0;
}