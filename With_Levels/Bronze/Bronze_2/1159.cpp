#include <bits/stdc++.h>
using namespace std;

int cnt[30];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        string temp;
        cin >> temp;
        cnt[temp[0] - 'a']++;
    }

    for (int i = 0; i < 30; i++)
    {
        cout << cnt[i] << ' ';
    }
    cout << '\n';

    bool flag = false;
    for (int i = 0; i < 30; i++)
    {
        if (cnt[i] >= 5)
        {
            flag = true;
            cout << char(i + 'a');
        }
    }
    if (!flag)
        cout << "PREDAJA\n";
    else
        cout << '\n';

    return 0;
}