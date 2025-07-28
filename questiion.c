// #include <stdio.h>
// void orime(int n, int arr[])
// {
//   for (int i = 0; i < n; i++)
//   {
//     if(arr[i]==1){
//       printf("%d neither prime nor composite");
//       continue;
//     }
//     int isPrime = 1; // Assume it's prime
//         for (int j = 2; j < arr[i]; j++) // Check divisibility up to sqrt(arr[i])
//         {
//             if (arr[i] % j == 0)
//             {
//                 isPrime = 0; // It's composite
//                 break;
//             }
//         }

//         if (isPrime==1)
//             printf("%d prime\n", arr[i]);
//         else
//             printf("%d composite\n", arr[i]);
//       }
//   }
// int main()
// {
//   int n;
//   scanf("%d", &n);
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
//     scanf("%d", &arr[i]);
//   }
//   orime(n, arr);
// }
/////////////2
// #include<stdio.h>
// void prime(int arr[],int n){
//     for(int i=0;i<5;i++){
//         if(arr[i]%2==0)printf("%d-even\n",arr[i]);
//         else printf("%d-odd\n",arr[i]);
//     }
// }
// int main(){
//     int n;
//     printf("enter number of elements");
//     scanf("%d",&n);
//       int arr[n];
//       for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//       }
//       for(int i=0;i<n;i++){
//       }
//       prime(arr,n);
// }
#include<stdio.h>
int main(){
 float x=7;
 printf("%.18f",x);

}