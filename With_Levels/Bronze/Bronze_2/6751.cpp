// problem: From 1987 to 2013
// id: 6751
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool fn(int n)
{
    int chk[10] = {0};
    string s = to_string(n);
    for (auto i : s)
        chk[i - '0']++;
    for (int i = 0; i < 10; i++)
    {
        if (chk[i] >= 2)
            return false;
    }
    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (true)
    {
        n++;
        if (fn(n))
        {
            cout << n;
            break;
        }
    }

    return 0;
}