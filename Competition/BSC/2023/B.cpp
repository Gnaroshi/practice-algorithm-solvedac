// problem: B번 - Goodbye, Code Jam
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Case #" << tcc << ": ";
        int n;
        cin >> n;
        if (n <= 25)
            cout << "World Finals\n";
        else if (n <= 1000)
            cout << "Round 3\n";
        else if (n <= 4500)
            cout << "Round 2\n";
        else
            cout << "Round 1\n";
    }

    return 0;
}