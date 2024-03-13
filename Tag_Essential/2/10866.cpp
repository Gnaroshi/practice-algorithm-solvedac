#include <iostream>

using namespace std;

int main(void)
{
    int commands; cin>>commands;
    int *deque = (int*)malloc(sizeof(int) * 10003);
    for (int i = 0; i < 10003; i++)
    {
        deque[i] = -1;
    }

    string command;
    int size = 0;
    for (int i = 0; i < commands; i++)
    {
        cin>>command;
        int inputInt;
        if (command == "push_front")
        {
            cin>>inputInt;
            if (size == 0)
            {
                deque[0] = inputInt;
                size++;

            }
            else
            {
                size++;
                for (int j = size - 1; j > 0 ; j--)
                {
                    deque[j] = deque[j - 1]; 
                }
                deque[0] = inputInt;
            }
            
        }
        if (command == "push_back")
        {
            cin>>inputInt;
            size++;
            deque[size - 1] = inputInt;
            
        }
        else if (command == "pop_front")
        {
            if (size == 0)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<deque[0]<<endl;
                for (int j = 0; j < size; j++)
                {
                    deque[j] = deque[j + 1];
                }
                deque[size - 1] = -1;
                size--;
            } 
        }
        else if (command == "pop_back")
        {
            if (size == 0)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<deque[size - 1]<<endl;
                deque[size - 1] = -1;
                size--;
            }            
        }
        else if (command == "size")
        {
            cout<<size<<endl;
        }
        else if (command == "empty")
        {
            if(size == 0)
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
            cout<<deque[0]<<endl;
        }
        else if (command == "back")
        {
            if (size == 0)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<deque[size - 1]<<endl;
            }
        }
        else if(command == "aa")
        {
            for (int j = 0; j < size; j++)
            {
                cout<<deque[j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}