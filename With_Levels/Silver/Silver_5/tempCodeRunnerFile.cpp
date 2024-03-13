#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int main(void)
{
    int n, m;
    cin>>n>>m;
    string temp;

    int **board = new int*[n];
    for (int i = 0; i < n; i++)
    {
        board[i] = new int[m];
    }

    int vist[51][51];
    for (int i = 0; i < n; i++)
    {
        fill(vist[i], vist[i] + m, 0);
    }

    queue<pair<int, int>> Q;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        for (int j = 0; j < m; j++)
        {
            board[i][j] = temp[j];
            if(temp[j] != 'X') Q.push({i, j});
            else vist[i][j] = 1;
        }
    }

    int cnt_row = 0;
    int cnt_col = 0;
    int cnt_dup = 0;
    bool rowOk;
    bool colOk;
    while(!Q.empty())
    {
        rowOk = true;
        colOk = true;
        auto cur = Q.front();
        Q.pop();
        if (vist[cur.X][cur.Y] == 0)
        {
            for (int i = 0; i < n; i++) 
            {
                if (vist[cur.X][i] == 1) rowOk = false;
            }
            for (int i = 0; i < m; i++) 
            {
                if (vist[i][cur.Y] == 1) colOk = false;
            }
            if (rowOk && colOk) cnt_dup++;
            if (rowOk) cnt_row++;
            if (colOk) cnt_col++;

        }
    }
    
    cout<<cnt_row / m + cnt_col / n - cnt_dup / (cnt_row / m)<<'\n';
    // cout<<cnt_row<<" "<<cnt_col<<" "<<cnt_dup<<'\n';
    
    return 0;
}