// problem: Cuboids
// id: 7581
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n[4];
    while (true)
    {
        bool isEnd = true;
        int zl = 0;
        for (int i = 0; i < 4; i++)
        {
            cin >> n[i];
            if (n[i] != 0)
                isEnd = false;
            else
                zl = i;
        }
        if (isEnd)
            break;
        if (zl < 3)
        {
            int t = n[3];
            for (int i = 0; i < 3; i++)
            {
                if (n[i] != 0)
                    t /= n[i];
            }
            for (int i = 0; i < 4; i++)
            {
                if (n[i] == 0)
                    cout << t;
                else
                    cout << n[i];
                cout << ' ';
            }
            cout << '\n';
        }
        else
        {
            int t = 1;
            for (int i = 0; i < 3; i++)
            {
                cout << n[i] << ' ';
                t *= n[i];
            }
            cout << t << '\n';
        }
    }

    return 0;
}
