#include<stdio.h>
#include<string.h>
int main()
{
    char str[80];
    puts("Enter a string");
    scanf("%[^\n]s",str);
    puts("The size of string is :");
    // size
    int size=0;
    int i=0;
    while(str[i]!='\0')
    {
        size++;
        i++;
    }
    printf("%d",size);
    int z=size;
    for(int i=0,j=size-1;i<=j;i++,j--)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts("\nThe reverse string is :");
    puts(str);
    return 0;
}