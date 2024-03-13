#include <iostream>

using namespace std;

int main(void)
{
    int commands; cin>>commands;
    int *queue = (int*)malloc(sizeof(int) * 10001);
    for (int i = 0; i < 10001; i++)
    {
        queue[i] = -1;
    }

    string command;
    int loc = 0;
    for (int i = 0; i < commands; i++)
    {
        cin>>command;
        int inputInt;
        if (command == "push")
        {
            cin>>inputInt;
            queue[loc] = inputInt;
            loc++;
        }
        else if (command == "pop")
        {
            cout<<queue[0]<<endl;
            for (int j = 0; j < loc; j++)
            {
                queue[j] = queue[j + 1];
            }
            if (loc == 0)
            {
                queue[loc] = -1;
            }
            else
            {
                queue[loc] = -1;
                loc--;
            }
        }
        else if (command == "size")
        {
            cout<<loc<<endl;
        }
        else if (command == "empty")
        {
            if(loc == 0)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
        else if (command == "front")
        {
            cout<<queue[0]<<endl;
        }
        else if (command == "back")
        {
            if (loc - 1 < 0)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<queue[loc - 1]<<endl;
            }
        }
        else
        {
            cout<<"there is no command like input";
        }
    }

    return 0;
}