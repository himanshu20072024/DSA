#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter no. of rows in matrix : ";
    cin>>a;
    int b;
    cout<<"Enter no. of columns in matrix : ";
    cin>>b;
    int arr[a][b];
    cout<<"Enter matrix elements : "<<endl;
    for(int i = 0 ; i < a ; i++)
    {
        for(int j = 0 ; j < b ; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The matrix you entered is : "<<endl;
    for(int i = 0 ; i < a ; i++)
    {
        for(int j = 0 ; j < b ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}