#include <iostream>
using namespace std;

int main(void)
{
    int nums[5];
    int temp = 0;
    for (int i = 0; i < 5; i++)
    {
        cin>>nums[i];
        temp += nums[i] * nums[i];
    }
    temp = temp % 10;
    cout<<temp;
        
    return 0;
}