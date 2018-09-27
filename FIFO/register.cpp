#include <iostream>
#include <stdexcept>
 
template <typename T>
class FIFO
{
private:

    struct Node {
        T     value;
        Node *next;

        Node(T _value) : value(_value), next(NULL) {}
    };

    Node *front;
    Node *back;

public:
    FIFO() : front(NULL), back(NULL) {}

    ~FIFO() {
        while (front != NULL)
            dequeue();
    }

    void enqueue(T _value) {
        Node *newNode = new Node(_value);

        if (front == NULL)
            front = newNode;
        else
            back->next = newNode;

        back = newNode;
    }

    T dequeue() {
        if (front == NULL)
           throw std::underflow_error("Nothing to dequeue");

        Node *temp   = front;        
        T     result = front->value;

        front = front->next;
        delete temp;

        return result;
    }
};

