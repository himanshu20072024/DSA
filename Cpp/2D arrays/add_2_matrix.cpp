#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter no. of rows in matrix 1: ";
    cin>>a;
    int b;
    cout<<"Enter no. of columns in matrix 1: ";
    cin>>b;
    int arr1[a][b];
    cout<<"Enter matrix elements : "<<endl;
    for(int i = 0 ;i < a ; i++)
    {
        for(int j = 0 ; j < b ; j++)
        {
            cin>>arr1[i][j];
        }
    }

    int c;
    cout<<"Enter no. of rows in matrix 2: ";
    cin>>c;
    int d;
    cout<<"Enter no. of columns in matrix 2: ";
    cin>>d;
    int arr2[c][d];
    cout<<"Enter matrix elements : "<<endl;
    for(int i = 0 ; i < c ; i++)
    {
        for(int j = 0 ; j < d ; j++)
        {
            cin>>arr2[i][j];
        }
    }

    int e = a,f = b;
    int sum[e][f];
    if(a == c and b ==d)
    {
        for(int i = 0 ;i < e ; i++)
        {
            for(int j = 0 ; j < f ; j++)
            {
                sum[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
    }
    else cout<<"Addition not possible !! write row and column same for both matrix!!";

    cout<<"Addition Matrix is : ";
    for(int i = 0 ;i < a ; i++)
    {
        for(int j = 0 ; j < b ; j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}