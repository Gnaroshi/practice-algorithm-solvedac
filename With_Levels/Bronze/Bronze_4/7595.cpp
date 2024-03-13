// problem:
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int t;
        cin >> t;
        if (t == 0)
            break;
        for (int i = 0; i < t; i++)
        {
            for (int j = 0; j <= i; j++)
                cout << '*';
            cout << '\n';
        }
    }

    return 0;
}