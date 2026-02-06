#include<stdio.h>
int function(int x)
{
    int b,arr[6],y=0;for(int i=0;i<6;i++){b=x%10; x=x/10;arr[5-i]=b;}for(int j=0;j<4;j++)if(arr[j]+1==arr[j+1]&&arr[j+1]+1==arr[j+2]){y=1; printf("Yes!"); break;}if(y!=1)printf("No!");}
int main(){int a;printf("Enter a 6 digit number:");scanf("%d",&a);function(a);return 0;}