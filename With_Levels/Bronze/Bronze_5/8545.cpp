#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string temp;
    cin >> temp;
    int t_len = temp.length();
    for (int i = t_len - 1; i >= 0; i--)
        cout << temp[i];
    cout << '\n';
    return 0;
}