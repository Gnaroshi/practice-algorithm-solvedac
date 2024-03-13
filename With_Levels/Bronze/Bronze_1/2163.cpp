// problem: 초콜릿 자르기
// id: 2163
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    cout << max(a, b) - 1 + (min(a, b) - 1) * max(a, b);

    return 0;
}