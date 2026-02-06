#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the size of array :");
    scanf("%d",&a);
    printf("Enter the target sum:");
    scanf("%d",&b);
    int arr[a];
    printf("Enter elements in increasing order only\n");
    for(int i=0;i<a;i++){
        printf("Enter element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0,j=a-1;i<j;1){
        if(arr[i]+arr[j]==b){
            printf("The two numbers are %d and %d and their indices are %d and %d.",arr[i],arr[j],i,j);
            break;
        }
        else{
            if(arr[i]+arr[j]>b){
                j-=1;
            }
            else{
                i+=1;
            }
        }
    }
    return 0;
}