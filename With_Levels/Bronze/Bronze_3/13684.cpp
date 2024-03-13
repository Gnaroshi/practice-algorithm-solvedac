// problem: Divisão da Nlogõnia
// id: 13684
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    while (true)
    {
        cin >> k;
        if (k == 0)
            break;
        int n, m;
        cin >> n >> m;
        int a, b;
        for (int i = 0; i < k; i++)
        {
            cin >> a >> b;
            if (a == n || b == m)
                cout << "divisa";
            else
            {
                if (a > n)
                {
                    if (b > m)
                        cout << "NE";
                    else
                        cout << "SE";
                }
                else
                {
                    if (b > m)
                        cout << "NO";
                    else
                        cout << "SO";
                }
            }
            cout << '\n';
        }
    }

    return 0;
}