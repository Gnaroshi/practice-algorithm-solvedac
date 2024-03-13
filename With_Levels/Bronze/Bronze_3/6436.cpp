// problem: Floppies
// id: 6436
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt = 1;
    while (true)
    {
        int s;
        cin >> s;
        if (s == 0)
            break;
        s = s % 2 == 1 ? s / 2 + 1 : s / 2;
        s += s / 2;
        cout << "File #" << cnt++ << "\nJohn needs " << (s + 1860000 - 1) / 1860000 << " floppies.\n\n";
    }

    return 0;
}