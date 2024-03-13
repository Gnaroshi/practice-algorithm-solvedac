#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n[4];
    for (int i = 0; i < 4; i++)
        cin >> n[i];

    if (n[0] == 8 || n[0] == 9)
        if (n[1] == n[2])
            if (n[3] == 8 || n[3] == 9)
            {
                cout << "ignore";
                return 0;
            }
    cout << "answer";

    return 0;
}