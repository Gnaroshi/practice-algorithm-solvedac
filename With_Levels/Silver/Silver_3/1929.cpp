#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    int m, n; cin>>m>>n;
    int temp = 1;
    int j;
    bool isOver=true;
    int *nums = (int*)malloc(sizeof(int)*(n+1));
    for (int i = 0; i < n + 1; i++) nums[i] = 0;
    for (int i = 2; i < sqrt(n) + 1; i++)
    {
        temp = i;
        j = i;
        
        while (isOver)
        {
            temp = i;
            temp *= j;
            j++;
            if (temp > n) break;
            nums[temp] = 1;
        }
    }
    if (m<2) m = 2;
    for (int i = m; i < n+1; i++)
    {
        if(nums[i]==0) cout<<i<<"\n";
    }
    free(nums);
    return 0;
}
