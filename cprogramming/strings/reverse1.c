#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    puts("Enter the string :");
    gets(str);
    printf("The string you entered : %s\n",str);
    int z=0;
    while(str[z]!='\0')
    {
        z+=1;
    }
    for(int i=0,j=z-1;i<=j;i++,j--)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts("The reverse string you entered is :");
    puts(str);
    return 0;
}