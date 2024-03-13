#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int btns[10];
    fill(btns, btns + 10, 0);

    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        btns[temp] = 1;
    }

    int ans = 0;
    ans = abs(n - 100);
    string n_st = to_string(n);
    for (int i = 0; i < 1000001; i++)
    {
        bool isAvail = true;
        string temp = to_string(i);
        for (int j = 0; j < temp.length(); j++)
        {
            if (btns[temp[j] - '0'] == 1)

            {
                isAvail = false;
                break;
            }
        }
        if (isAvail)
        {
            int chck = abs(n - i) + to_string(i).length();
            ans = min(ans, chck);
        }
    }
    cout << ans << '\n';

    return 0;
}