#include <iostream>

using namespace std;

int main(void)
{
    int max = -1;
    int n, m; cin>>n>>m;
    string tempS;
    int **arr;
    arr = new int*[n];
    for (int i = 0; i < n; i++) arr[i] = new int[m];

    for (int i = 0; i < n; i++)
    {
        cin>>tempS;
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = tempS[j] - 48;
        }
    }


    bool isSquare = false;
    int sNum;

    if (n > m) sNum = m;
    else sNum = n; 
    sNum--;

    while(true)
    {
        if (sNum < 1) break;
        isSquare = false;

        for (int i = 0; i + sNum < n; i++)
        {
            if (i + sNum > n)
            {
                break;
            }

            for (int j = 0; j + sNum < m; j++)
            {
                if (j + sNum > m)
                {
                    break;
                }

                if (arr[i][j] == arr[i + sNum][j])
                {
                    if (arr[i][j] == arr[i][j + sNum])
                    {
                        if (arr[i][j + sNum] == arr[i + sNum][j + sNum])
                        {
                            isSquare = true;
                            break;
                        }
                    }
                }
            }
        }
        if (isSquare) break;
        sNum--;
        if (sNum < 1) break;
    }
    sNum++;
    max = sNum * sNum;
    cout<<max<<"\n";
    return 0;
}