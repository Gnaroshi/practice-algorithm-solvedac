// problem: Report Card Time
// id: 11367
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        int n;
        cin >> s >> n;
        cout << s << ' ';
        if (n >= 97 && n <= 100)
            cout << "A+";
        else if (n >= 90 && n <= 96)
            cout << "A";
        else if (n >= 87 && n <= 89)
            cout << "B+";
        else if (n >= 80 && n <= 86)
            cout << "B";
        else if (n >= 77 && n <= 79)
            cout << "C+";
        else if (n >= 70 && n <= 76)
            cout << "C";
        else if (n >= 67 && n <= 69)
            cout << "D+";
        else if (n >= 60 && n <= 66)
            cout << "D";
        else
            cout << "F";
        cout << '\n';
    }

    return 0;
}