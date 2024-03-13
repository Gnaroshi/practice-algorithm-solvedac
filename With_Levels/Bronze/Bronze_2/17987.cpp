// problem: Howl
// id: 17987
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t = "AWH";
    cin >> s;
    int iter = s.length() - 2;
    cout << t;
    for (int i = 0; i < iter; i++)
        cout << 'O';

    return 0;
}