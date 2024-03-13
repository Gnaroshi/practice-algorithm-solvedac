#include <iostream>
using namespace std;

int main(void)
{
    int temp;
    int tempSum = 0;
    int sum = 100;
    int *heights = new int(9);
    for (int i = 0; i < 9; i++) 
    {
        cin>>heights[i];
        tempSum+=heights[i];
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (heights[i] < heights[j])
            {
                temp = heights[i];
                heights[i] = heights[j];
                heights[j] = temp;
            }
        }
    }
    bool isFounded = false;
    for (int i = 0; i < 9; i++)
    {
        if(isFounded)
        {
            break;
        }
        for (int j = 0; j < 9; j++)
        {
            if ((tempSum - heights[i] - heights[j]) == sum)
            {
                for (int h = 0; h < 9; h++)
                {
                    if (h == i || h == j) continue;
                    cout<<heights[h]<<"\n";
                }
                isFounded = true;
            }
        }
    }
    return 0;
}