// problem: 2018 연세대학교 프로그래밍 경진대회
// id: 15667
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    n--;
    int a = 0;
    for (; a * (a + 1) != n;)
        a++;
    cout << a;
    return 0;
}