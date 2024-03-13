// problem: 괄호 없는 사칙연산
// id: 16503
// time taken:
#include <bits/stdc++.h>
using namespace std;

int cal(int a, int b, char u)
{
    if (u == '+')
        return a + b;
    else if (u == '-')
        return a - b;
    else if (u == '/')
        return a / b;
    else if (u == '*')
        return a * b;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    char t1, t2;
    cin >> a >> t1 >> b >> t2 >> c;
    int a1, a2;
    a1 = cal(cal(a, b, t1), c, t2);
    a2 = cal(a, cal(b, c, t2), t1);
    cout << min(a1, a2) << '\n'
         << max(a1, a2);

    return 0;
}