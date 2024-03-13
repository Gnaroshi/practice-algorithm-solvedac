#include <iostream>
using namespace std;

int main(void)
{
    int a, b, c;
    cin>>a>>b>>c;
    int nums[10];
    for (int i = 0; i < 10; i++)
    {
        nums[i] = 0;
    }
    long mul = a * b * c;
    while (mul > 0)
    {
        nums[mul % 10]++;
        mul /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<nums[i]<<endl;
    }

    return 0;
}