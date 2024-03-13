// problem: 맥주 99병
// id: 17293
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = n; i > 1; i--)
    {
        cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\n";
        cout << "Take one down and pass it around, ";
        // K-1 bottles of beer on the wall.\n";
        if (i - 1 == 1)
            cout << "1 bottle of beer on the wall.\n";
        else
            cout << i - 1 << " bottles of beer on the wall.\n";
        cout << "\n";
    }

    cout << "1 bottle of beer on the wall, 1 bottle of beer.\n";
    cout << "Take one down and pass it around, no more bottles of beer on the wall.\n\n";

    cout << "No more bottles of beer on the wall, no more bottles of beer.\n";
    if (n != 1)
        cout << "Go to the store and buy some more, " << n << " bottles of beer on the wall.\n";
    else
        cout << "Go to the store and buy some more, " << n << " bottle of beer on the wall.\n";

    return 0;
}