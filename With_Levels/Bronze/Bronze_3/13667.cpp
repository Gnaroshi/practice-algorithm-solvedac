// problem: Leitura Ótica
// id: 13667
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    while (true)
    {
        cin >> tc;
        if (!tc)
            break;
        while (tc--)
        {
            int n[5] = {0};
            int t, cnt = 0;
            for (int i = 0; i < 5; i++)
            {
                cin >> t;
                if (t <= 127)
                {
                    n[i] = 1;
                    cnt++;
                }
            }
            if (cnt == 1)
            {
                for (int i = 0; i < 5; i++)
                {
                    if (n[i] == 1)
                    {
                        cout << char('A' + i) << '\n';
                        break;
                    }
                }
            }
            else
                cout << "*\n";
        }
    }

    return 0;
}