// problem: 통학의 신
// id: 17945
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, t1, t2;
    cin >> a >> b;
    t1 = -a + sqrt(a * a - b);
    t2 = -a - sqrt(a * a - b);
    if (t1 == t2)
        cout << t1;
    else
        cout << t2 << ' ' << t1;

    return 0;
}