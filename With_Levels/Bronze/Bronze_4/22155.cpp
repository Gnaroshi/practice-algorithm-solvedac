// problem: Простая задача
// id: 22155
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        int i, f;
        cin >> i >> f;
        if ((i <= 1 && f <= 2) || (i <= 2 && f <= 1))
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}