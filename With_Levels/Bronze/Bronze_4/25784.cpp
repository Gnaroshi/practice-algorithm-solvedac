// problem: Easy-to-Solve Expressions
// id: 25784
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n[3];
    int s, m;
    s = 0;
    m = 1;
    for (int i = 0; i < 3; i++)
    {
        cin >> n[i];
        s += n[i];
        m *= n[i];
    }
    for (int i = 0; i < 3; i++)
    {
        if (s - n[i] == n[i])
        {
            cout << 1;
            return 0;
        }
        else if (m == n[i] * n[i])
        {
            cout << 2;
            return 0;
        }
    }
    cout << 3;

    return 0;
}