// problem: Hurra!
// id: 26767
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        bool s, e;
        s = i % 7 == 0;
        e = i % 11 == 0;
        if (s && !e)
            cout << "Hurra!";
        else if (!s && e)
            cout << "Super!";
        else if (s && e)
            cout << "Wiwat!";
        else
            cout << i;
        cout << '\n';
    }

    return 0;
}