// problem: 문문문
// id: 17210
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a;
    cin >> n >> a;
    if (n >= 6)
        cout << "Love is open door";
    else
    {
        if (!a)
            for (int i = 1; i < n; i++)
                cout << i % 2 << '\n';
        else
            for (int i = 2; i <= n; i++)
                cout << i % 2 << '\n';
    }

    return 0;
}