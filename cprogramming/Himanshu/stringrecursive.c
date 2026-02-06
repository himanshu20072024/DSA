#include<stdio.h>
void reverse(char str[],int index)
{
    if(str[index]=='\0') return;
    reverse(str,index+1);
    printf("%c",str[index]);
}
int main()
{
    char* str;
    str="Ideal Honestboy";
    reverse(str,0);
    return 0;
}