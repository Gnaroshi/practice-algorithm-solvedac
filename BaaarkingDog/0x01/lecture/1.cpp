#include <iostream>
using namespace std;

int main(void)
{
    int n; cin>>n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
        else if (i % 5 == 0)
        {
            sum += i;
        }
    }

    cout<<sum<<endl;
    return 0;
}