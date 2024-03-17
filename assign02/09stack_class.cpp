
#include <iostream>
#include <cstdlib>
using namespace std;

class Stack
{
public:
    int *stack;
    int top;
    int size;

    Stack(int s)
    {
        size = s;
        stack = new int[size];
        top = -1;
    }

    ~Stack()
    {
        delete[] stack;
    }

    void push()
    {
        if (top == size - 1)
        {
            cout << "\nStack is overflow\n";
        }
        else
        {
            cout << "\nEnter element : ";
            cin >> stack[++top];
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "\nStack is underflow\n";
        }
        else
        {
            cout << "\n"
                 << stack[top--] << " element is deleted\n";
        }
    }

    void display()
    {
        if (top == -1)
        {
            cout << "\nStack is underflow\n";
        }
        else
        {
            for (int i = top; i >= 0; i--)
            {
                cout << stack[i] << "\t";
            }
            cout << endl;
        }
    }
};

int main()
{
    int size, choice;
    cout << "Enter the size of stack : ";
    cin >> size;

    Stack stack(size);

    while (true)
    {
        cout << "\n 1.for push \n";
        cout << "\n 2.for pop \n";
        cout << "\n 3.for display \n";
        cout << "\n 4.for exit \n";
        cout << "Enter choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            stack.push();
            break;
        case 2:
            stack.pop();
            break;
        case 3:
            stack.display();
            break;
        case 4:
        cout<<"\nexit\n";
            exit(0);
        default:
            cout << "Your choice is invalid";
            break;
        }
    }

    return 0;
}
