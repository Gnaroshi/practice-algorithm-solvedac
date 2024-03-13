// problem: Звуки в подвале
// id: 28722
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    if (s.front() == s.back())
        cout << "Lose";
    else
        cout << "Win";

    return 0;
}