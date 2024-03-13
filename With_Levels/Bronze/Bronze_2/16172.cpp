// problem: 나는 친구가 적다 (Large)
// id: 16172
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b, c = "";
    cin >> a >> b;
    int iter = a.length();
    for (int i = 0; i < iter; i++)
    {
        if (!isdigit(a[i]))
            c.push_back(a[i]);
    }

    string::size_type t = c.find(b);
    cout << (t != string::npos);

    return 0;
}