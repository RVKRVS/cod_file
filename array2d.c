// #include<stdio.h>
// int main(){
//     // int r;
//     // scanf("%d",&r);
//     // int c;
//     // scanf("%d",&c);
//     int arr[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d",&arr[i][j]);

//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d",arr[i][j]);
//         }printf("\n");
// }return 0;
// }
// #include<stdio.h>
// int main(){
//     int arr[2][2]={1,2,3,4};
//     int brr[2][2]={5,6,7,8};
//     int rrr[2][2];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             rrr[i][j]=arr[i][j] + brr[i][j];
//         }
//     }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             printf(" %d",rrr[i][j]);
//         }printf("\n");
// }return 0;
// }
// #include<stdio.h>
// int main(){
//     int n,m;
//     printf("enter number of rows")
//     int arr[2][2],brr[2][2],crr[2][2];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             crr[i][j]=arr[i][j]+brr[i][j];
//                 }
//     }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             printf(" %d",crr[i][j]);
//         }printf("\n");
// }return 0;
// }
// #include<stdio.h>
// int main(){
//     int arr[3][4]={{1,0,1,1},{0,1,0,1},{1,0,0,1}},r1=0,r2=0,r3=0;
//     for (int j = 0; j < 4; j++) {
//         r1 += arr[0][j];
//         r2 += arr[1][j];
//         r3 += arr[2][j];
//     }
//     if (r1 >= r2 && r1 >= r3) {
//         printf("Row 1 contains the most 1s or is tied.\n");
//     }
//     else if (r2 >= r1 && r2 >= r3) {
//         printf("Row 2 contains the most 1s or is tied.\n");
//     }
//     else {
//         printf("Row 3 contains the most 1s.\n");
//     }
// }
// #include <stdio.h>

// int main()
// {
//     int arr[3][4] = {
//         {1, 0, 11, 12},
//         {20, 1, 30, 15},
//         {91, 0, 43, 90}};
//     int brr[4][3];
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 3; j++)
//             brr[i][j] = arr[j][i];
//     }
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 3; j++){
//             printf("%d",brr[i][j]);
//         }printf("\n");
//     }
// }
// #include <stdio.h>

// int main()
// {
//     int arr[3][3] = {
//         {1, 0, 11},
//         {20, 1, 30},
//         {91, 0, 43}};
    
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++){
//             printf("%d ",arr[j][i]);
//         }printf("\n");
//     }
// }
// #include<stdio.h>
// int main(){
//     int arr[3][3],trr[3][3],drr[3][3],temp;
//     for(int i=0;i<=2;i++){
//     for(int j=0;j<=2;j++){
//          scanf("%d",&arr[i][j]);
//     }
// }
// for(int i=0;i<=2;i++){
//     for(int j=0;j<=2;j++){
//         trr[i][j]=arr[j][i];
//     }
// }
// for(int i=0;i<=2;i++){
//     for(int j=0;j<=2;j++){
//         printf("%d ",trr[i][j]);
//     }printf("\n");
// }
// for(int i=0;i<=2;i++){
//    int j=0;
//    int k=3-1;
//    while(j<k){
//    temp=trr[i][j];
//    trr[i][j]=trr[i][k];
//    trr[i][k]=temp;
//    j++;
//    k--;}
// }
// for(int i=0;i<=2;i++){
//     for(int j=0;j<=2;j++){
//         printf("%d ",trr[i][j]);
//     }printf("\n");
// }
// }
#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int abr[3][3];
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      abr[i][j]=arr[j][i];
    }
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("%d ",arr[j][i]);
    }printf("\n");
}
}