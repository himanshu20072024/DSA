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

        void add(int data)
        {
            if(size == capacity)
            {
                capacity *= 2;
                int* arr1 = new int[capacity];
                for(int i = 0 ; i < size ; i++)
                {
                    arr1[i] = arr[i];
                }
                delete[] arr;
                arr = arr1;
            }
            arr[size++] = data;
        }

        void show()
        {
            if(size == 0)
            {
                cout<<"array is empty!!";
                return;
            }
            else 
            {            
                for(int i = 0 ; i < size ; i++)
                {
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
        }

        void remove()
        {
            if(size == 0)
            {
                cout<<"Array is empty!!";
                return;
            }
            size--;
            return;
        }

        int get(int index)
        {
            if(index <= 0 || index >= size)
            {
                cout<<"Enter correct index!!";
                return -1;
            }
            //cout<<"Element at index "<<index<<" is : "<<arr[index]<<endl;
            return arr[index];
        }
};

int main()
{
    Vector v;
    v.add(72);
    v.add(746);
    v.add(76);
    v.add(73);
    v.add(75);
    v.show();
    v.remove();
    v.get(3);
}