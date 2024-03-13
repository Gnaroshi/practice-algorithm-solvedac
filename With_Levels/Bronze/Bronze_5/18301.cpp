#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n[3];
    for (int i = 0; i < 3; i++)
        cin >> n[i];
    cout << ((n[0] + 1) * (n[1] + 1) / (n[2] + 1) - 1) << '\n';
    return 0;
}