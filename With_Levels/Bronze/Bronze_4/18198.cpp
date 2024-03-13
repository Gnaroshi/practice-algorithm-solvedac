// problem: Basketball One-on-One
// id: 18198
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string temp;
    int a, b;
    a = b = 0;
    cin >> temp;
    int iter = temp.length();
    for (int i = 0; i < iter; i += 2)
        temp[i] == 'A' ? a += temp[i + 1] - '0' : b += temp[i + 1] - '0';
    cout << (a < b ? "B" : "A") << '\n';

    return 0;
}