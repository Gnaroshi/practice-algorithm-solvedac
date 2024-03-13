// problem: 고양이 사료
// id: 18125
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool brd[101][101];
bool tbrd[101][101];

void fn1()
{
    cout << "|>___/|     /}\n";
    cout << "| O O |    / }\n";
    cout << "( =0= )\"\"\"\"  \\\n";
    cout << "| ^  ____    |\n";
    cout << "|_|_/    ||__|\n";
    return;
}

void fn2()
{
    cout << "|>___/|        /}\n";
    cout << "| O < |       / }\n";
    cout << "(==0==)------/ }\n";
    cout << "| ^  _____    |\n";
    cout << "|_|_/     ||__|\n";
    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> m >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> brd[i][j];
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            tbrd[j][n - i - 1] = brd[i][j];

    bool chk = true, t;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> t;
            if (t != tbrd[i][j])
                chk = false;
        }
    }

    if (chk)
        fn2();
    else
        fn1();

    return 0;
}