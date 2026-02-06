#include <iostream>
using namespace std;

struct Queue 
{
    int size, cap;
    int* arr;

    bool isFull() 
    {
        return (size == cap);
    }

    bool isEmpty()
    {
        return (size == 0);
    }

    Queue(int c) 
    {
        cap = c;
        size = 0;
        arr = new int[cap];
    }

    void enque(int x) 
    {
        if (isFull()) return;
        arr[size] = x; // Insert the element at the end
        size++;
    }

    void deque() 
    {
        if (isEmpty()) return;
        for (int i = 0; i < size - 1; i++) 
        {
            arr[i] = arr[i + 1];
        }
        size--; // Move size decrement outside the loop
    }

    int getFront() 
    {
        if (isEmpty()) return -1;
        return arr[0]; // Return the first element
    }

    int getRear() 
    {
        if (isEmpty()) return -1;
        return arr[size - 1]; // Return the last element
    }
};

int main() 
{
    Queue q(5);
    q.enque(10);
    q.enque(20);
    q.enque(30);

    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.getRear() << endl;

    q.deque();
    cout << "Front after deque: " << q.getFront() << endl;
    return 0;
}
