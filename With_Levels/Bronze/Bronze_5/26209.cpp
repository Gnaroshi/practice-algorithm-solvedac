#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int i = 0; i < 8; i++)
    {
        int temp;
        cin >> temp;
        if (temp != 0 && temp != 1)
        {
            cout << "F\n";
            return 0;
        }
    }
    cout << "S\n";

    return 0;
}