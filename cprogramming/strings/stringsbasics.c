#include<stdio.h>
#include<strings.h>
int main()
{
    puts("I am Ideal");  // automatically \n de deta hai
    char str[]="I am himanshu and i am here in NIT DURGAPUR";
    puts(str);

    // for(int i=0;i!=\0;i++)
    // {
        
    // }
    char arr[]="Heloo and welcome back to the virtual world ";
    arr[0]='I';
    int i=0;
    while(arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    }
    printf("\n%d",arr[8]);
    // ways of printing array

    
    int j=0;
    printf("\n");
    while(arr[j]!='\0')
    {
        printf("%c",j[arr]);
        j++;
    }
    int m=0;
    printf("\n");
    while(arr[m]!='\0')
    {
        printf("%c",*(arr+m));
        m++;
    }
    return 0;
}