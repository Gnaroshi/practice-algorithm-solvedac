// problem: Звездочки
// id: 27251
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
        for (int j = 1; j <= i * i; j++)
        {
            if (j > 100)
            {
                cout << "...";
                break;
            }
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}