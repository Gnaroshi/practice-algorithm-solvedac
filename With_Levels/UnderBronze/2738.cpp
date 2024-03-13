#include <iostream>
using namespace std;

int main(void)
{
    int n, m; cin>>n>>m;
    int **arrayA = (int**)malloc(sizeof(int*)*n);
    for (int i = 0; i < n; i++) arrayA[i] = (int*)malloc(sizeof(int) * m);
    int **arrayB = (int**)malloc(sizeof(int*)*n);
    for (int i = 0; i < n; i++) arrayB[i] = (int*)malloc(sizeof(int) * m);
    int **arrayO = (int**)malloc(sizeof(int*)*n);
    for (int i = 0; i < n; i++) arrayO[i] = (int*)malloc(sizeof(int) * m);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arrayA[i][j];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arrayB[i][j];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arrayO[i][j] = arrayA[i][j] + arrayB[i][j];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arrayO[i][j]<<" ";
        }
    }
    return 0;
}
