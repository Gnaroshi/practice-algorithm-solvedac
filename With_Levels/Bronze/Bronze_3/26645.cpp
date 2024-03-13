// problem: 성장의 비약 선택권
// id: 26645
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[4] = {
        min(n + 8, 210),
        min(n + 4, 220),
        min(n + 2, 230),
        min(n + 1, 240)};
    int mx = -1;
    int l = 0;
    for (int i = 0; i < 4; i++)
    {
        if (mx <= a[i])
        {
            mx = a[i];
            l = i;
        }
    }
    cout << l + 1;

    return 0;
}