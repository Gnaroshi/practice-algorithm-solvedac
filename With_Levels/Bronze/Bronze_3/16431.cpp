// problem: 베시와 데이지
// id: 16431
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int br, bc, dr, dc, jr, jc;
    cin >> br >> bc >> dr >> dc >> jr >> jc;
    int b, d;
    b = max(abs(br - jr), abs(bc - jc));
    d = abs(dr - jr) + abs(dc - jc);
    if (b < d)
        cout << "bessie";
    else if (b > d)
        cout << "daisy";
    else
        cout << "tie";
    return 0;
}