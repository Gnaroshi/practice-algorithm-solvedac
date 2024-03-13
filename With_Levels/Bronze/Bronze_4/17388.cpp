#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s, k, h;
    cin >> s >> k >> h;
    if (s + k + h >= 100)
        cout << "OK\n";
    else
    {
        int temp;
        temp = min(min(s, k), h);
        if (temp == s)
            cout << "Soongsil\n";
        else if (temp == k)
            cout << "Korea\n";
        else
            cout << "Hanyang\n";
    }

    return 0;
}
