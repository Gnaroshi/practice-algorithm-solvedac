#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a1 = 0;
    int a2 = 0;
    int p[5] = {6, 3, 2, 1, 2};
    for (int i = 0; i < 5; i++)
    {
        int temp;
        cin >> temp;
        a1 += temp * p[i];
    }
    for (int i = 0; i < 5; i++)
    {
        int temp;
        cin >> temp;
        a2 += temp * p[i];
    }
    cout << a1 << ' ' << a2 << '\n';

    return 0;
}