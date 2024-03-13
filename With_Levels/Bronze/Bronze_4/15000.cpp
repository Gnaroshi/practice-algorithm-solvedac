#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string temp;
    cin >> temp;
    int temp_len = temp.length();
    for (int i = 0; i < temp_len; i++)
    {
        cout << char(temp[i] - 'a' + 'A');
    }
    cout << '\n';

    return 0;
}