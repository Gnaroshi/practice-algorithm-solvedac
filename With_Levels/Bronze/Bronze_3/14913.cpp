// problem: 등차수열에서 항 번호 찾기
// id: 14913
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, d, k;
    cin >> a >> d >> k;
    k -= a;
    if (k % d != 0 || k / d < 0)
        cout << "X";
    else
        cout << k / d + 1;

    return 0;
}