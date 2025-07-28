// #include <stdio.h>
// int main(){
//     int n;
//     printf("enter a number");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i=i+1){
//         printf("hlo\n");
//     }
//     return 0;
// }
// 
// #include <stdio.h>
// int main(){
//     for(int i=1;i<=100;i++){
//         if (i%2!=0){
//             printf("%d\n",i);

//         }
        
//     }
// }
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int i=n;i<=n*10;i=i+n){
//     printf("%d\n",i);
    
// }
// return 0;
// }
// #include <stdio.h>
// int main(){
//  for (int i=2;i<=2*10;i=i+2){
//    printf("%d\n",i);
//  }
//  return 0;


// }
// #include <stdio.h>
// int main(){
//   for(int i=1;i<=100;i=i+2){  
//     printf("%d\n",i);}
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     for(int i=1;i<=100;i=i+2){
//         printf("%d\n",i);
//     }
// }
// #include <stdio.h>
// int main(){
//     for(int i=19;i<=190;i=i+19){
//         printf("%d\n",i);
//     }

// return 0;
// }
// #include <stdio.h>
// int main(){
//     int n;
//     printf("enter a number");
//     scanf("%d",&n);
//     for(int i=n;i<=n*10;i=i+n){
//         printf("%d\n",i);
//     }

// return 0;
// }
// #include <stdio.h>
// int main(){
//     int n;
//     printf("enter a number");
//     scanf("%d",&n);
//     for(int i=4;i<=3*n+1;i=i+3){
//         printf("%d\n",i);
//     }

// return 0;
// }
// 
// #include <stdio.h>
// int main(){
//     int a=100;
//     for(int i=1;a>0;i++){
//         printf("%d ",a);
//         a=a-3;
//     }
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     float a=100,n;
//     scanf("%f",&n);
//     for(int i=1;i<=n;i++){
//         printf("%f ",a);
//         a=a*0.5;
//     }
//     return 0;
// }
#include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=2;i<n;i++){
//         if (n%i==0){
//             printf("composite\n");
//             break;
//         }
        
//         }
    
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n=0,num;
//     scanf("%d",&num);
//     while(num>0){
//         num/=10;
//         n++;
        
//     }
//     printf("%d",n);
//     return 0;
// }
#include<stdio.h>
int main(){
    int s=0,num,x;
    scanf("%d",&num);
    while(num>0){
        x= num%10;
        s+=x;
        num/=10;

    }
    printf("%d",s);
    return 0;
}