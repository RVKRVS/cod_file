// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//       for(int j=1;j<=n+1-i;j++){
//           printf("%d",j);
//       }
//       printf("\n");
//      }
// }
// #include <stdio.h>
// int main(){
//  int n;
//  scanf("%d",&n);
//  for(int i=1;i<=n;i++){
//    for(int j=1;j<=2*i-1;j+=2){
//       printf("%d",j);
//    }
//    printf("\n");
//  }

// return 0;

// }
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//      int a=1;
//      for(int j=1;j<=i;j++)
//         { int d=a+64;
//          char ch=(char)d;
//          printf("%c",ch);
//          a++;}
//          printf("\n");
//     }

// }
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+1-i;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=2*i-1;j=j+2){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }
#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4-i;j++){
         printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
         printf("%c",(char)64+k);
        }
        printf("\n");
    }
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4-i;j++){
         printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
         printf("%c",(char)64+k);
        }
        printf("\n");
    }
}