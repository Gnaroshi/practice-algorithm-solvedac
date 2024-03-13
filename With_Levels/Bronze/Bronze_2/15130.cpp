// problem: Arithmetic Sequences
// id: 15130
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n[10], a = 0, b = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> n[i];
        if (n[i] != 0)
        {
            if (!a)
                a = i;
            else
                b = i;
        }
    }
    if ((n[b] - n[a]) % (b - a))
        cout << -1;
    else
    {
        int d = (n[b] - n[a]) / (b - a);
        for (int i = a - 1; i >= 0; i--)
        {
            n[i] = n[a] - d * (a - i);
        }
        for (int i = a + 1; i < 10; i++)
        {
            n[i] = n[a] + d * (i - a);
        }
        for (int i = 0; i < 10; i++)
            cout << n[i] << ' ';
    }

    return 0;
}