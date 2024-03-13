#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;

    int cnt = 10;
    int rem_x = x;
    bool isFA = false;
    while (cnt--)
    {
        int crr = 0;
        int temp = x;
        rem_x = x;
        while (temp > 0)
        {
            crr++;
            temp /= 10;
        }
        temp = x;

        int div = 1;
        for (int i = 0; i < crr; i++)
        {
            div *= 10;
        }
        x = temp / div * crr;
        if (rem_x == x)
        {
            isFA = true;
        }
    }
    if (isFA)
        cout << "FA\n";
    else
        cout << "NFA\n";
    return 0;
}