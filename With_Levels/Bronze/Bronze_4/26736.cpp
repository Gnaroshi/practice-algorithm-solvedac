// problem: Wynik meczu
// id: 26736
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string t;
    int a = 0;
    cin >> t;
    int iter = t.length();
    for (int i = 0; i < iter; i++)
        if (t[i] == 'A')
            a++;
    cout << a << " : " << iter - a;
    return 0;
}