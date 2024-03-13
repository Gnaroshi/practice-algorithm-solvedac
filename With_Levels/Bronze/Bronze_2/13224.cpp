// problem: Chop Cup
// id: 13224
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n[3] = {1, 0, 0};
    string s;
    cin >> s;
    int iter = s.length();
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == 'A')
            swap(n[0], n[1]);
        else if (s[i] == 'B')
            swap(n[2], n[1]);
        else
            swap(n[0], n[2]);
    }
    for (int i = 0; i < 3; i++)
        if (n[i])
            cout << i + 1;

    return 0;
}