// problem: 2의 보수
// id: 24389
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cur = 0;
    cin >> n;
    char *a = new char[32];
    char *b = new char[32];
    fill(a, a + 32, 0);
    fill(b, b + 32, 0);
    while (n)
    {
        if (n % 2)
            a[cur] = 1;
        else
            a[cur] = 0;
        n /= 2;
        cur++;
    }

    for (int i = 0; i < 32; i++)
        b[i] = !a[i];
    b[0]++;
    for (int i = 0; i < 32; i++)
    {
        if (b[i] == 2)
        {
            b[i] = 0;
            b[i + 1]++;
        }
    }
    cur = 0;
    for (int i = 0; i < 32; i++)
        cur += (a[i] != b[i]);
    cout << cur;

    return 0;
}