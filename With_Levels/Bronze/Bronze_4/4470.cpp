#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    int tc;
    cin >> tc;
    string temp;
    getline(cin, temp, '\n');
    for (int i = 1; i <= tc; i++)
    {
        string temp;
        getline(cin, temp, '\n');
        cout << i << ". " << temp << '\n';
    }

    return 0;
}