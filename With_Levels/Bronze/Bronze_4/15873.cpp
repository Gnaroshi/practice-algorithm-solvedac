#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string temp;
    cin >> temp;

    int a, b;
    if (temp.length() == 3)
    {
        a = (temp[0] - '0') * 10 + temp[1] - '0';
        b = (temp[1] - '0') * 10 + temp[2] - '0';
        if (a > 10)
        {
            cout << temp[0] - '0' + b << '\n';
        }
        else
        {
            cout << a + temp[2] - '0' << '\n';
        }
    }
    else if (temp.length() == 4)
    {
        cout << (temp[0] - '0') * 10 + temp[1] - '0' + (temp[2] - '0') * 10 + temp[3] - '0' << '\n';
    }
    else
        cout << temp[0] - '0' + temp[1] - '0' << '\n';

    return 0;
}