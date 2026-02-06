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
            arr = new int[capacity];
        }

        void push_back(int element)
        {
            if(size == capacity)
            {
                capacity *= 2;
                int* arr1 = new int[capacity];
                for(int i = 0; i < size; i++)
                {
                    arr1[i] = arr[i];
                }
                arr = arr1;
            } 
            arr[size++] = element;
        }

        void print()
        {
            for(int i = 0; i < size; i++)
                cout << arr[i] << " ";
            cout << endl;
        }



};

int main()
{
    Vector* v1;
    v1->push_back(1);
}