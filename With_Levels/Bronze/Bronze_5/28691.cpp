// problem: 정보보호학부 동아리 소개
// id: 28691
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char c;
    cin >> c;
    if (c == 'M')
        cout << "MatKor";
    else if (c == 'W')
        cout << "WiCys";
    else if (c == 'C')
        cout << "CyKor";
    else if (c == 'A')
        cout << "AlKor";
    else
        cout << "$clear";

    return 0;
}