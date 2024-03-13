#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int n;
    cin >> n;

    char m[2] = {'X', 'O'};
    char **board = (char **)malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++)
    {
        board[i] = (char *)malloc(sizeof(char) * n);
        fill(board[i], board[i] + n, ' ');
    }

    int turn = 0;
    while (true)
    {
        string temp;
        cin >> temp;
        if (temp[0] == 'Q')
            break;

        int loc = temp[1] - '0' - 1;
        // cout << temp[0] << ' ' << loc << '\n';
        if (temp[0] == 'L')
        {
            for (int i = n - 1; i > 0; i--)
            {
                if (board[loc][i - 1] != ' ')
                    board[loc][i] = board[loc][i - 1];
            }
            board[loc][0] = m[turn % 2];
        }
        else if (temp[0] == 'R')
        {
            for (int i = 1; i < n; i++)
            {
                if (board[loc][i] != ' ')
                    board[loc][i - 1] = board[loc][i];
            }
            board[loc][n - 1] = m[turn % 2];
        }
        else if (temp[0] == 'T')
        {
            for (int i = n - 1; i > 0; i--)
            {
                if (board[i - 1][loc] != ' ')
                    board[i][loc] = board[i - 1][loc];
            }
            board[0][loc] = m[turn % 2];
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                if (board[i][loc] != ' ')
                    board[i - 1][loc] = board[i][loc];
            }
            board[n - 1][loc] = m[turn % 2];
        }
        // cout << "------------------------------\n";
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cout << board[i][j] << ' ';
        //     }
        //     cout << '\n';
        // }
        // cout << "------------------------------\n";

        turn++;
    }

    int x_cnt = 0;
    int o_cnt = 0;
    for (int i = 0; i < n; i++)
    {
        bool isRow = true;
        bool isCol = true;
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] != 'X')
                isRow = false;
            if (board[i][j] != 'O')
                isCol = false;
        }
        if (isRow)
            x_cnt++;
        if (isCol)
            o_cnt++;
    }
    for (int i = 0; i < n; i++)
    {
        bool isRow = true;
        bool isCol = true;
        for (int j = 0; j < n; j++)
        {
            if (board[j][i] != 'X')
                isRow = false;
            if (board[j][i] != 'O')
                isCol = false;
        }
        if (isRow)
            x_cnt++;
        if (isCol)
            o_cnt++;
    }

    // cout << x_cnt << ' ' << o_cnt << '\n';

    if (x_cnt == o_cnt)
        cout << "TIE GAME\n";
    else if (x_cnt > o_cnt)
        cout << "X WINS\n";
    else
        cout << "O WINS\n";
    return 0;
}