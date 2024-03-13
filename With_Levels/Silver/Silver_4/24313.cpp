// problem: 알고리즘 수업 - 점근적 표기 1
// id: 24313
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a1, a0, c, n0;
    cin >> a1 >> a0 >> c >> n0;
    int temp = a1 * n0 + a0 - c * n0;
    if (temp <= 0 && c - a1 >= 0)
        cout << 1;
    else
        cout << 0;

    return 0;
}