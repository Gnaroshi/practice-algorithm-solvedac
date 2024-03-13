#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, c;
    cin >> n;
    c = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        c += temp - 1;
    }
    cout << c + 1 << '\n';

    return 0;
}