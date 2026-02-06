#include<iostream>
using namespace std;

class Vector
{
    public:
        int size;
        int capacity;
        int* arr;
        Vector()
        {
            size = 0;
            capacity = 1;
            arr = new int[1];
        }

        void add(int element)
        {
            if(size == capacity)
            {
                capacity *= 2;
                int* arr2 = new int[capacity];
                for(int i = 0 ; i < size ; i++)
                {
                    arr2[i] = arr[i];
                }
                delete[] arr;
                arr = arr2;
            }
            arr[size++] = element;
        }

        void print()
        {
            for(int i = 0 ; i < size ; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

        void remove()
        {
            if(size == 0)
            {
                cout<<"Array is empty!!"<<endl;
                return;
            }
            size--;
        }

        int get(int index)
        {
            if(index >= size || index < 0)
            {
                cout<<"Enter correct index!!";
                return -1;
            }
            cout<<arr[index];
            return arr[index];
        }
};

int main()
{
    Vector v;
    v.remove();
    v.add(10);
    v.print();
    v.add(20);
    v.add(30);
    v.add(40);
    v.add(50);
    v.add(60);
    v.add(70);
    v.add(80);
    v.print();
    v.remove();
    v.get(3);
}