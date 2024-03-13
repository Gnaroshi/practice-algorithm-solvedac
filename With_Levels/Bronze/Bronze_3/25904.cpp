// problem: 안녕 클레오파트라 세상에서 제일가는 포테이토칩
// id: 25904
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    int *t = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        cin >> t[i];
    int loc = 0;
    while (true)
    {
        if (t[loc] < x)
        {
            cout << loc + 1;
            break;
        }
        loc++;
        x++;
        if (loc == n)
            loc -= n;
    }

    return 0;
}