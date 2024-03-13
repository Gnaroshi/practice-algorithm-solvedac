#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int n; cin>>n;
    int count = 666;
    int shomeCountTemp = 0;
    int isShome = false;
    string temp;
    while(true)
    {
        isShome = false;
        temp = to_string(count);
        shomeCountTemp = 0;
        for (int i = 0; i < temp.length(); i++)
        {
            if (temp[i] == '6')
            {
                shomeCountTemp++;
            }
            else
            {
                shomeCountTemp = 0;
            }
            if (shomeCountTemp == 3)
            {
                isShome = true;
                break;
            }
        }
        if (isShome)
        {
            n--;
            if (n == 0) break;
        }
        count++;
    }
    cout<<count<<"\n";

}