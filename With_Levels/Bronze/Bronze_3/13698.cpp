// problem: Hawk eyes
// id: 13698
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int n[4] = {1, 0, 0, 2};
    cin >> s;
    int iter = s.length();
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == 'A')
            swap(n[0], n[1]);
        else if (s[i] == 'B')
            swap(n[0], n[2]);
        else if (s[i] == 'C')
            swap(n[0], n[3]);
        else if (s[i] == 'D')
            swap(n[1], n[2]);
        else if (s[i] == 'E')
            swap(n[1], n[3]);
        else if (s[i] == 'F')
            swap(n[2], n[3]);
    }
    for (int i = 0; i < 4; i++)
        if (n[i] == 1)
            cout << i + 1 << '\n';
    for (int i = 0; i < 4; i++)
        if (n[i] == 2)
            cout << i + 1 << '\n';

    return 0;
}