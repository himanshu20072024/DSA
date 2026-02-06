// #include<stdio.h>

// void InsertionSort(int arr[], int n, int a)
// {
//     for(int i=1 ; i<n ; i++)
//     {
//         int curr = arr[i];
//         int prev = i-1;
//         while(prev >= 0 && arr[prev] > arr[curr])
//         {
//             arr[prev+1] = arr[prev];
//             prev--;
//         }
//         arr[prev] = curr;
//     }
// }

// int main()
// {
//     int n;
//     printf("Enter size of array:");
//     scanf("%d",&n);
//     int arr[n];

//     int a;
//     printf("Enter element to insert:");
//     scanf("%d",&a);

//     printf("Enter the elements of array:");
//     for(int i=0 ; i<n ; i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     InsertionSort(arr, n);

//     printf("After InsertionSort:");
//     for(int i=0 ; i<n ; i++)
//     {
//         printf("%d ",arr[i]);
//     }

//     return 0;
// }