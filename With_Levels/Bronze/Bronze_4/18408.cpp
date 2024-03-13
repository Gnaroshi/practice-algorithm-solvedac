#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n[3] = {0};
    for (int i = 0; i < 3; i++)
    {
        int temp;
        cin >> temp;
        n[temp]++;
    }
    if (n[1] > n[2])
        cout << 1;
    else
        cout << 2;

    return 0;
}