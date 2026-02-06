#include<stdio.h>
int main()
{
    char* input="Ideal Honestboy";
    int count=0;
    //printf("Enter the string:");
    //scanf("%s",input);
    while(*(input++))
    {
        if(*(input-1)=='a' || *(input-1)=='e' || *(input-1)=='i' || *(input-1)=='o' || *(input-1)=='u' )
        count++;
    }
    printf("There are %d vowels in the string\n",count);
    return 0;
}