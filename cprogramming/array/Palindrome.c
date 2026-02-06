#include<stdio.h>
void check(int arr[],int a)
{
    int i=0;
    int j=a-1;
    while(i<j)
    {
        if(arr[i]==arr[j])
        {
           i++;
           j--;
        }
        else
        {
           printf("It is not a palindrome");
           break;
        }
    } 
    printf("It is palindrome");
    return;
}
int main()
{
    int a;
    printf("Enter odd number of array you want: ");
    scanf("%d",&a);
    int b[a];
    if(a%2!=0)
    {
      for(int i=0;i<a;i++)
      {
          printf("Enter element %d:",i+1);
          scanf("%d",&b[i]);
      }
    }
    else
    printf("Enter odd number");
    check(b,a);
    return 0;
}