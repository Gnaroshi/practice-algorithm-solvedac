// problem: A번 - Toe Jumps
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
const int SIZE = 2;
const int JSC = 3;
string js[] = {"T", "F", "Lz"};
char jss[JSC][2][2] = {{{'.', 'O'}, {'P', '.'}},
                       {{'I', '.'}, {'.', 'P'}},
                       {{'O', '.'}, {'.', 'P'}}};

int chk(char **arr)
{
    for (int i = 0; i < JSC; i++)
    {
        bool tJ = true;
        for (int j = 0; j < SIZE; j++)
        {
            for (int k = 0; k < SIZE; k++)
            {
                if (arr[j][k] != jss[i][j][k])
                    tJ = false;
            }
        }
        if (tJ)
            return i;
    }
    return JSC;
}

char **rot(char **arr)
{
    char **t = (char **)malloc(sizeof(char *) * SIZE);
    for (int i = 0; i < SIZE; i++)
        t[i] = (char *)malloc(sizeof(char) * SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
            t[j][SIZE - 1 - i] = arr[i][j];
    }
    return t;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char c;
    cin >> c;
    char **f = (char **)malloc(sizeof(char *) * SIZE);
    for (int i = 0; i < SIZE; i++)
        f[i] = (char *)malloc(sizeof(char) * SIZE);
    string a;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> a;
        for (int j = 0; j < SIZE; j++)
            f[i][j] = a[j];
    }
    int iter = 0;
    if (c == 'N')
        iter = 2;
    else if (c == 'W')
        iter = 3;
    else if (c == 'E')
        iter = 1;
    for (int i = 0; i < iter; i++)
        f = rot(f);
    int ans = chk(f);
    if (ans == JSC)
        cout << "?";
    else
        cout << js[ans];

    return 0;
}