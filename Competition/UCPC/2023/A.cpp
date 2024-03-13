// problem: A번 - 체육은 코딩과목 입니다
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int c = 0;
    int n;
    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        c += n;
    }
    c %= 4;
    if (c == 0)
        cout << "N";
    else if (c == 1)
        cout << "E";
    else if (c == 2)
        cout << "S";
    else if (c == 3)
        cout << "W";

    return 0;
}