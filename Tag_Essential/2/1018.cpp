#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    int n, m; cin>>n>>m;
    char board[50][50];
    char boardw[50][50];
    char boardb[50][50];

    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            if ((i + j) % 2 == 0)
            {
                boardw[i][j] = 'W';
                boardb[i][j] = 'B';
            }
            else
            {
                boardw[i][j] = 'B';
                boardb[i][j] = 'W';
            }

        }
    }
    string temp;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        for (int j = 0; j < m; j++)
        {
            board[i][j] = temp[j];
        }
    }
    int counterw;
    int counterb;
    int mincounter = 10000;

    for (int ii = 0; ii < n - 7; ii++)
    {
        for (int jj = 0; jj < m - 7; jj++)
        {
            counterw = 0;
            counterb = 0;
            for (int i = 0; i < 8; i++)
            {
                for (int j = 0; j < 8; j++)
                {
                    if (board[i + ii][j + jj] != boardw[i + ii][j + jj])
                    {
                        counterw++;
                    }
                    if (board[i + ii][j + jj] != boardb[i + ii][j + jj])
                    {
                        counterb++;
                    }
                }
            }

            if (mincounter > min(counterw, counterb))
            {
                mincounter = min(counterw, counterb);
            }
        }

    }

    
    cout<<mincounter<<"\n";
    return 0;
}