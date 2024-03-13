// problem: Pascal Library
// id: 5753
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, d, t;
    while (true)
    {
        cin >> n >> d;
        if (!n && !d)
            break;
        int *al = (int *)malloc(sizeof(int) * n);
        fill(al, al + n, 0);
        for (int i = 0; i < d; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> t;
                al[j] += t;
            }
        }
        bool chk = false;
        for (int i = 0; i < n; i++)
        {
            if (al[i] == d)
            {
                chk = true;
                break;
            }
        }
        if (chk)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}