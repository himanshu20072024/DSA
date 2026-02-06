#include<iostream>  // some problem here 
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
    for(int j = 0 ; j < b ; j++)
    {
        for(int i = 0 ; i < a ; i++)
        {
            printf("Enter elemnt arr[%d][%d] : ",i,j);
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