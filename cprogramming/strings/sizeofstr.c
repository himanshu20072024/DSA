#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Ideal Honestboy";
    int i;
    for(i=0;str[i]!='\0';i++)
    {
       
    }
    // agar hame kuch aur print karna hai string ke alawa toh ham puts ke andar double inverted(") ka use karte hai agar hamne uska use nhi kia matlab ham koi string ko ishara kar rhe hai 
    puts("I am himanshu kumar");  // isme agar str likhta without using "_" toh string print ho jata poora ka poora agli line dekh
    puts(str);
    printf("%s",str); // naya format specifier for string printing  faltu me for loop use mat krio string ke case me 
    printf("\n %c \n",str[0]);  
    printf("The size of array is : %d",i+1); // because jitna bhi size hota hai computer apne aap \0 deta hai uska 1 size badh jata hai
    return 0;
}