#include <iostream>
using namespace std;

int main(void)
{
    int temp;
    int nums[30] = { 0 };
    for (int i = 0; i < 28; i++)
    {
        cin>>temp;
        nums[temp - 1] = 1;
    }
    for (int i = 0; i < 30; i++)
    {
        if(nums[i] != 1)
        {
            cout<<i + 1<<"\n";
        }
    }
    return 0;
}