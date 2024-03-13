// problem: 줄 세기
// id: 4806
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt = 0;
    string s;
    while (getline(cin, s))
        cnt++;
    cout << cnt;

    return 0;
}
