// problem: Target Practice
// id: 5367
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cout << '|';
    for (int i = 0; i < n - 2; i++)
        cout << '-';
    cout << "|\n";

    for (int i = 0; i < n - 2; i++)
    {
        cout << '|';
        string s = "";
        for (int j = 0; j < n - 2; j++)
            s += ' ';
        s[i] = s[n - i - 3] = '*';
        cout << s;
        cout << "|\n";
    }

    cout << '|';
    for (int i = 0; i < n - 2; i++)
        cout << '-';
    cout << '|';

    return 0;
}