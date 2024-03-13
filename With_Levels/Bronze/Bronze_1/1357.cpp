// problem: 뒤집힌 덧셈
// id: 1357
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;
    string a = to_string(x), b = to_string(y);
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    a = to_string(stoi(a) + stoi(b));
    reverse(a.begin(), a.end());
    cout << stoi(a);

    return 0;
}