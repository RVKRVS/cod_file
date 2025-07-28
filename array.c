// #include <stdio.h>
// int main(){

//     int m[10]={95,90,31,25,100,50,65,89,97,30};
//     for(int i=0;i<=9;i++){
//         if (m[i]<35){
//             printf("%d\n",i);
//         }
//     }
// return 0;

// }
// sum of elements of array
// #include <stdio.h>
// int main(){

//     int m[5]={1,3,5,7,10},sum=0;
//     for(int i=0;i<=4;i++){
//        sum=sum+m[i];
//     }
//     printf("%d",sum);
// return 0;

// }
// #include <stdio.h>
// int main(){

//     int m[5]={1,3,5,7,10},sum=1;
//     for(int i=0;i<=4;i++){
//        sum=sum*m[i];
//     }
//     printf("%d",sum);
// return 0;

// }
// #include<stdio.h>
// int main(){
//     int arr[7]={5,8,5,2,9,5,1};
//     int max=arr[0];
//     for(int i=0;i<=6;i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }printf("%d",max);
// }
// #include<stdio.h>
// int main(){
//     int arr[7]={5,8,5,2,9,5,1};
//     for(int i=0;i<=6;i++){
//         if (i%2==0)arr[i]=arr[i]+10;
//         else arr[i]*=2;
//     }
//     for(int i=0;i<=6;i++)printf("%d\n",arr[i]);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int arr[7]={5,8,5,2,9,5,1},n,c=0;
//     printf("enter the number");
//     scanf("%d",&n);
//     for(int i=0;i<=6;i++){
//         if (arr[i]>=n)c=c+1;
//         else c*=1;
//     }
//     printf("%d",c);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int arr[7]={5,8,5,2,9,5,1},o=0,e=0;
//     for(int i=0;i<=6;i++){
//         if(i%2==0)e+=arr[i];
//         else o+=arr[i];
//     }
//     printf("%d",o-e);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int arr[7]={5,8,5,2,9,5,1},m=arr[0],sm=arr[0];
//     for(int i=0;i<=6;i++){
//         if (arr[i]>m) m=arr[i];
//         }
//         for(int i=0;i<=6;i++){
//             if (arr[i]>sm  && arr[i]!=m) sm=arr[i];
//             }
//             printf("%d",sm);
//       return 0;
//     }
// #include<stdio.h>
// int main(){
//     int arr[7]={5,8,5,2,9,5,1},m=arr[0],sm=arr[0];
//     for(int i=0;i<=6;i++){
//        for(int j=j+1;j<=6;j++){
//        if(arr[i]==arr[j]){
//         printf("%d\n",arr[i]);
//         break;
//        }
//        }
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int arr[7]={1,2,3,4,3,2,1};
//     for(int i=0;i<=6;i++){
//        for(int j=0;j<=6;j++){
//        if(arr[i]!=arr[j]){
//         printf("%d\n",arr[j]);
//         break;
//        }
//        }
//     }
//     return 0;
// }
// }
// #include<stdio.h>
// int main(){
//   int arr[5];
//   for(int i=0;i<5;i++){
//     scanf("%d",&arr[i]);
//   }
//   int l=arr[0];
//   for(int i=0;i<5;i++){
//    if(l>arr[i])l=arr[i];
//   }
//   printf("%d\n",l);
// }
// #include<stdio.h>
// int orime(int n,int a[]){
//   int a=0;
//     for(int i=0;i<n;i++){
//       for(int j=2;j<a[i];j++){
//            if(a[i]%j==0)a=1;
//            else if(a[i]==1) printf("%d is neither prime nor composite ",1);
//            else if(a[i]%j!=0) printf("%d  is prime ",a[i]);
//       }
//     }
//   }
// int main(){
//   int n;
//   scanf("%d",&n);
//   int arr[n];
//   for(int i=0;i<n;i++){
//     scanf("%d",&arr[i]);
//   }
//   orime(n,arr);
// }
// #include<stdio.h>
// void prime(int arr[],int n){
//     for(int i=0;i<5;i++){
//         if(arr[i]%2==0)printf("%d even",arr[i]);
//         else printf("%d odd",arr[i]);
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
//         printf("%d",arr[i]);
//       }
//       prime(5,arr);
// }
// #include<stdio.h>
// int main(){
//   int arr[8]={2,13,12,13,12,13,12,3},a=0;
//       for(int i=0;i<8;i++){
//          for(int j=i+1;j<8;j++){
//            if(arr[i]+arr[j]==5){
//             a++;}
//       }
// }
// printf("%d",a);
// return 0;
// }
// #include<stdio.h>
// int main()
// {
//   int arr[8] = {2, 13, 12, 13, 12, 13, 12, 3}, m = arr[0], sm = arr[0];
//   for (int i = 0; i < 8; i++)
//   {
//     if (arr[i] > m)
//       m = arr[i];
//   }
//   for (int i = 0; i < 8; i++)
//   {
//     if (arr[i] > sm && arr[i] != m)
//       sm = arr[i];
//   }
//   printf("%d", sm);

//   return 0;
// }
// #include<stdio.h>
// int main()
// {
//   int arr[8] = {1,2,3,4,4,3,2,1},a,b=0;
//    printf("enter number");
//    scanf("%d",&a);
//    for (int i = 0; i < 8; i++)
//    {
//      if(arr[i]==a){
//       b=1;
//       break;
//      }
//    }
   
//    if(b==1)printf("yes");
//    else printf("no");
 
// }
// #include<stdio.h>
// int main()
// {
//   int arr[8] = {1,2,3,4,5,7,8},a,b=0;
//    printf("enter number");
//    scanf("%d",&a);
//    for (int i = 0; i < 8; i++)
//    {
//     for (int j = i+1; j < 8; j++){

//      if(arr[i]==j){

//       break;
//      }}
//    }
   
//    if(b==1)printf("yes");
//    else printf("no");
 
// }
// #include<stdio.h>
// int main()
// {
//   int arr[8]={1,2,3,4,5,6,7,8},ab[4],mrr[4];
//   for(int i=0;i<4;i++){
//     ab[i]=arr[i];
//   }
//   for(int i=0;i<4;i++){
//     mrr[i]=ab[4+i];
//   }
//   for(int i=0;i<4;i++){
//     printf("%d",mrr[i]);
//   }printf("\n");
//   for(int i=0;i<4;i++){
//     printf("%d",ab[i]);
//   }
// }
// #include<stdio.h>
// void fun(int n,int arr[]){
//     int i=0;
//     for( i=0;i<n;i++){
//         if(arr[i]%2==0)printf("%d-even ",arr[i]);
//         else printf(" %d-odd ",arr[i]);
//     }
// }
// int main(){
    
//     int arr[5]={4,6,9,3,7};
//     for(int i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }printf("\n");
//     fun(5,arr);
// }
// #include<stdio.h>
// void rev(int arr[]){
//     int i=0,j=4,temp;
//     while(i<j){
//         temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//         i++;
//         j--;
//     }
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     rev(arr);
//     for(int i=0;i<5;i++)printf("%d ",arr[i]);
// }
// #include<stdio.h>
// void prime(int arr[]){
//     for(int i=0;i<5;i++){
//         int a=1;
//         for(int j=2;j<arr[i];j++)
//         if(arr[i]%j==0){
//             a=0;
//             break;
//        }
//        if(a==1)printf("%d prime",arr[i]);
//        else printf("%d composite",arr[i]);
//     }
// }
// int main(){
//     int arr[5]={21,56,87,41,23};
//     prime(arr);
// }
// #include<stdio.h>
// int main(){
//     int arr[5]={1,2,4,6,8},i=0,j=4;
//     while(i<=j){
//         int temp=arr[i];
//          arr[i]=arr[j];
//          arr[j]=temp;
//          i++;
//          j--;
//     }
//     for(int i=0;i<=4;i++){
//         printf("%d ",arr[i]);
//     }
// }
// #include<stdio.h>
// int main(){
//     int arr[6];
//     int n;
//     for(int i=0;i<=5;i++){
//         printf("enter tghe element");
//  scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<=5;i++){
//    printf("%d",arr[i]);
// }
// }
// #include<stdio.h>
// int evod(int arr[]){
//   for(int i=0;i<6;i++){
//     if(arr[i]%2==0)
//     printf("\n%d even",arr[i]);
//     else
//     printf("\n%d odd",arr[i]);
//   }
// }
// int main(){
//     int arr[6]={1,2,3,4,5,6};
//     evod(arr);
//     }
// #include<stdio.h>
// int main(){
//     int k;
//     int arr[5]={1,2,3,4,5},brr[k+1],crr[k];
//     for(int i=0;i<=k;i++){
      
//     }
// }
// #include<stdio.h>
// void reverse(int arr[],int a,int b){
//     for(int i=a,j=b;i<=j;i++,j--){
//         int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//     }

// }
// int main(){
//     int k=10;
//     k=k%6;
//     int arr[6]={1,2,3,4,5,6};
//     reverse(arr,0,5);
//     reverse(arr,0,k-1);
//     reverse(arr,k,5);
//     for(int i=0;i<6;i++){
//         printf("%d ",arr[i]);
//     }
// }
// #include<stdio.h>
// int main(){
//     int arr[5]={1,2,2,3,3};
//     int x=0;
//     for(int i=1;i<len(arr);i++){
//         if(arr[i]!=arr[x]){
//             x=x+1;
//             arr[x]=arr[i];
//         }
//     }
//     return x;
// }
// #include<stdio.h>
// int main(){
//     int arr[7]={3,5,4,2,3,2,1};
//     int n=7;
//     for(int i=0;i<n;i++)printf("%d ",arr[i]);
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     printf("\n");
//         for(int i=0;i<n;i++)printf("%d ",arr[i]);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int arr[5]={1,2,2,3,3};
//     int x=0;
//     for(int i=1;i<len(arr);i++){
//         if(arr[i]!=arr[x]){
//             x=x+1;
//             arr[x]=arr[i];
//         }
//     }
//     return x;
// }
// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int arr[7]={3,5,4,2,3,2,1};
//     int n=7;
//     for(int i=0;i<n;i++)printf("%d ",arr[i]);
//     for(int i=0;i<n-1;i++){
//      int min=INT_MAX;
//      int minidx=-1;
//      for(int j=i;j<=n-1;j++){
//         if(min>arr[j]){
//             min=arr[j];;
//             minidx=j;
//         }
//      }
//      int temp=arr[minidx];
//      arr[minidx]=arr[i];
//      arr[i]=temp;
//     }
//     printf("\n");
//         for(int i=0;i<n;i++)printf("%d ",arr[i]);
//     return 0;
// }
#include<stdio.h>
int main(){
    int arr[5]={5,4,3,2,1};
    int n=5;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
}
}