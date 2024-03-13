#include <bits/stdc++.h>
using namespace std;

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

    int row[50];
    int col[50];
    fill(row, row + 50, 0);
    fill(col, col + 50, 0);


    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        for (int j = 0; j < m; j++)
        {
            board[i][j] = temp[j];
            if(temp[j] == 'X')
            {
                row[j] = 1;
                col[i] = 1;
            }
        }
    }

    int cnt_row = 0;
    int cnt_col = 0;
    for (int i = 0; i < m; i++) if (row[i] == 0) cnt_row++;
    for (int i = 0; i < n; i++) if (col[i] == 0) cnt_col++;
    cout<<max(cnt_row, cnt_col)<<'\n';
    
    return 0;
}