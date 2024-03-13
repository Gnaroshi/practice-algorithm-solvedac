// problem: Exam
// id: 16406
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, iter, sm = 0;
    string a, b;
    cin >> k >> a >> b;
    iter = a.length();
    for (int i = 0; i < iter; i++)
    {
        if (a[i] == b[i])
            sm++;
    }
    cout << iter - abs(k - sm);

    return 0;
}