#include <bits/stdc++.h>
using namespace std;

#define MX 22

int tc;
int board[MX][MX];
int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, -1, 1, 0};

void print_board(int sze, int case_num)
{
    cout << "Case #" << case_num << ":\n";
    for (int i = 0; i < sze; i++)
    {
        for (int j = 0; j < sze; j++)
        {
            cout << board[i][j] << ' ';
        }
        cout << '\n';
    }
}

void rotate_ccw(int sze)
{
    int temp_board[MX][MX];
    for (int i = 0; i < sze; i++)
    {
        for (int j = 0; j < sze; j++)
        {
            temp_board[i][j] = board[i][j];
        }
    }

    for (int i = 0; i < sze; i++)
    {
        for (int j = 0; j < sze; j++)
        {
            board[j][sze - 1 - i] = temp_board[i][j];
        }
    }
}

void solv(int sze)
{

    if (sze == 1)
    {
        return;
    }

    int row = 0;
    int col = 0;

    for (int i = 0; i < sze; i++)
    {
        int temp_nums[MX];
        fill(temp_nums, temp_nums + sze, 0);
        stack<int> S;

        for (int j = 0; j < sze; j++)
        {
            int cnt = 0;
            if (board[i][j] != 0)
            {
                cnt++;
                S.push(board[i][j]);
            }
        }
        if (S.empty())
            continue;
        fill(board[i], board[i] + sze, 0);

        // right
        int loc = 1;
        while (!S.empty())
        {
            int cur = S.top();
            S.pop();
            if (!S.empty())
            {
                if (cur == S.top())
                {
                    board[i][sze - loc] = cur * 2;
                    S.pop();
                    loc++;
                }
                else
                {
                    board[i][sze - loc] = cur;
                    loc++;
                }
            }
            else
            {
                board[i][sze - loc] = cur;
            }
        }
    }
}

void init_board(int sze, int dir)
{
    for (int i = 0; i < sze; i++)
    {
        for (int j = 0; j < sze; j++)
        {
            cin >> board[i][j];
        }
    }

    for (int i = 0; i < dir; i++)
    {
        rotate_ccw(sze);
    }
    solv(sze);
    if (dir != 0)
    {
        for (int i = 0; i < 4 - dir; i++)
        {
            rotate_ccw(sze);
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> tc;
    int size;
    int temp_tc = tc;
    string direction;
    while (tc--)
    {
        // initialize board
        for (int i = 0; i < MX; i++)
        {
            fill(board[i], board[i] + MX, 0);
        }

        cin >> size >> direction;
        if (direction == "right")
            init_board(size, 0);
        else if (direction == "up")
            init_board(size, 1);
        else if (direction == "left")
            init_board(size, 2);
        else
            init_board(size, 3);
        print_board(size, temp_tc - tc);
    }
    return 0;
}