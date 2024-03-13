#include <bits/stdc++.h>
using namespace std;

void start_end(int sze)
{
    for (int i = 0; i < sze; i++)
        cout << '*';

    for (int i = 0; i < sze * 2 - 3; i++)
        cout << ' ';

    for (int i = 0; i < sze; i++)
        cout << '*';
    cout << '\n';
    return;
}

void one_block(int sze)
{
    cout << '*';
    for (int j = 0; j < sze - 2; j++)
        cout << ' ';
    cout << '*';
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    start_end(n);

    int cnt = 0;
    bool isHalf = false;
    for (int i = 1; i < (n - 1) * 2; i++)
    {
        if (!isHalf)
            cnt++;
        else
            cnt--;

        if (cnt == n - 1)
            isHalf = !isHalf;

        for (int j = 0; j < cnt; j++)
            cout << ' ';

        if (cnt == n - 1)
        {
            one_block(n);
            for (int j = 0; j < n - 2; j++)
                cout << ' ';
            cout << '*';
        }
        else
        {
            one_block(n);
            for (int j = 0; j < (n - cnt - 1) * 2 - 1; j++)
                cout << ' ';
            one_block(n);
        }
        cout << '\n';
    }

    start_end(n);
    return 0;
}