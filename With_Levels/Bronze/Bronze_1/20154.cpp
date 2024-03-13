// problem: 이 구역의 승자는 누구야?!
// id: 20154
// time taken:
#include <bits/stdc++.h>
using namespace std;

int rc[26] = {3, 2, 1, 2, 3, 3, 3, 3, 1, 1, 3, 1, 3, 3, 1, 2, 2, 2, 1, 2, 1, 1, 2, 2, 2, 1};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 0;
    string s;
    cin >> s;
    for (auto i : s)
        ans += rc[i - 'A'];
    if (ans % 2)
        cout << "I'm a winner!";
    else
        cout << "You're the winner?";

    return 0;
}