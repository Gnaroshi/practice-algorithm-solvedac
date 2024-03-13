// problem: 대충 더해
// id: 8949
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;
    if (a.length() < b.length())
        swap(a, b);
    int iter = a.length() - b.length();

    for (int i = 0; i < iter; i++)
        b.insert(0, "0");
    iter = a.length();
    for (int i = 0; i < iter; i++)
    {
        cout << int(a[i] + b[i] - '0' - '0');
    }

    return 0;
}