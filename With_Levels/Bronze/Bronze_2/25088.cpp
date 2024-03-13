// problem: Punched Cards
// id: 25088
// time taken:
#include <bits/stdc++.h>
using namespace std;

void pm(int n)
{
    for (int i = 0; i < n; i++)
        cout << "+-";
    cout << "+\n";
    return;
}
void ld(int n)
{
    for (int i = 0; i < n; i++)
        cout << "|.";
    cout << "|\n";
    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Case #" << tcc << ":\n";
        int r, c;
        cin >> r >> c;
        cout << "..";
        pm(c - 1);
        cout << "..";
        ld(c - 1);
        for (int i = 0; i < r - 1; i++)
        {
            pm(c);
            ld(c);
        }
        pm(c);
    }

    return 0;
}