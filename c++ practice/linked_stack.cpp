#include <iostream>

 template <typename T>
class Stack
{
private:
    struct Node
    {
        T item;
        Node *next;
    };
    Node *top, *current;

public:
    Stack() : top(NULL)
    {
    }

    void push(T value)
    {
        Node *newItem = new Node;
        if (newItem == NULL)
        {
            std::cout << "Stack push cannot allocate memory";
        }
        else
        {
            newItem->item = value;
            newItem->next = top;
            top = newItem;
        }
    }
    bool Empty()
    {
        return top == NULL;
    }
    void pop()
    {
        if (Empty())
        {
            std::cout << "Stack is Empty on pop";
        }
        else
        {
            Node *temp = top;
            top = top->next;

            temp->next = NULL;
            delete temp;
        }
    }

    void pop(T &stackTop)
    {
        if (Empty())
        {
            std::cout << "stack is empty on pop save ";
        }
        else
        {
            stackTop = top->item;
            Node *temp = top;
            top = top->next;

            temp->next = NULL;
            delete temp;
        }
    }

    T getTop(T &topItem)
    {
        if (Empty())
        {
            std::cout << "stack is Empty on getTop";
        }
        else
        {
            topItem = top->item;
            return topItem;
        }
        return -1;
    }
    void Display()
    {
        current = top;
        std::cout << "\nItems in Satck : ";
        std::cout << " [  ";
        while (current != NULL)
        {
            std::cout << current->item;
            current = current->next;
            std::cout << ", ";
        }
        std::cout << "]\n";
    }
};
int main()
{
    Stack <int> list;
 
    list.push(10);
    list.push(20);
    list.push(30);
    list.push(40);
    // list.push(50);
    
    list.pop();

        list.Display();

    int num  = 0;
    list.pop(num);
    std::cout << num <<std::endl;
    
        list.Display();

    return 0;

}
