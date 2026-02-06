#include<iostream>
using namespace std;

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements of arrays : ";
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    int first = 0;
    int last = n - 1;
    while(first < last)
    {
        swap(&arr[first], &arr[last]);
        first++;
        last--;
    }
    cout<<"Reversed array is : ";
    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}