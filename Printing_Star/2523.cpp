#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int cnt = 0;
    bool isMax = false;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (!isMax)
            cnt++;
        else
            cnt--;

        if (cnt == n)
            isMax = !isMax;
        for (int j = 0; j < cnt; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }

    return 0;
}