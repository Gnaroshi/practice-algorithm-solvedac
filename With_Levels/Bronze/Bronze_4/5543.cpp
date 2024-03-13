#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int bug = 2001;
    int drnk = 2001;
    int temp;
    for (int i = 0; i < 3; i++)
    {
        cin >> temp;
        if (temp < bug)
            bug = temp;
    }

    for (int i = 0; i < 2; i++)
    {
        cin >> temp;
        if (temp < drnk)
            drnk = temp;
    }

    cout << bug + drnk - 50 << '\n';

    return 0;
}