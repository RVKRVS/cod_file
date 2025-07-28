// #include <stdio.h>
// int main(){
//  int num;
//  printf("give a number:");
//  scanf("%d",&num);
//  if (num%2==0){
//     printf("even number");
//  }
//  else{
//  printf("odd no.");

//  }
//  return 0;

// }
// #include <stdio.h>
// int main(){
//  int num;
//  printf("give a number:");
//  scanf("%d",&num);
//  if (num%5==0){
//     printf( "number is divisible by 5");
//  }
//  else{
//  printf("not dividible by 5");

//  }
//  return 0;

// }
//home work
// #include <stdio.h>
// int main(){
//  int year;
//  printf("give a year as input:");
//  scanf("%d",&year);
//  if(year%4==0){
//     printf("leap year");
//  }
//  else{
//     printf("not a leap year");
//  }
//  return 0;


// }
// #include <stdio.h>
// int main(){
//  float cp,sp,profit,loss;
//  printf("enter cp:");
//  scanf("%f",&cp);
//  printf("enter sp:");
//  scanf("%f",&sp);
//  if (sp>cp){
//       printf("profit:%f",sp-cp);
//  }
//  else if (sp==cp)
//  {
//     printf("no profit no loss");
//  }
 
//  else{
//     printf("loss:%f",cp-sp);
//  }
//  return 0;
// }
// #include <stdio.h>
// int main(){
//  int a,b,c;
//  printf("give values for a,b,c:");
//  scanf("%d %d %d",&a,&b,&c);
//  if(a>b && a>c){
//    printf("a is greatest%d",a);
//  }
//  if(b>a && b>c){
//    printf("%db is greatest",b);
//  }
//   if(c>a&&c>b){
//    printf("%dc is greatest",c);
//  }
//  return 0;
// }
// #include <stdio.h>
// int main(){
//    int x1,x2,x3,y1,y2,y3,m1,m2;
//    printf("give values for x1,x2,x3,y1,y2,y3");
//    scanf("%d %d %d %d %d %d",x1,x2,x3,y1,y2,y3);
//    m1=(y2-y1)/(x2-x1);
//    m2=(y2-y3)/(x2-x3);
//    if(m1=m2){
//     printf("yes these three points lie on straight line");
//    }
//    else{
//     printf("no");
//    }
//    return 0;


// }
// #include <stdio.h>
// int main(){
//     char age;
//     printf("enter your age:");
//     scanf("%d",&age);
//     switch (age)
//     {
//     case 1:
//        printf("normal six");
//         break;
//     case 2:
//        printf("69 six");
//         break;
    
//     default:
//        printf("dygi");
//     }
// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("give n");
//     scanf("%d",&n);
//     int a=1;
//     for(int i=1;i<=n;i++){

//     printf("%d\n",a);
//     a=a*2;

//     }
//      return 0; 
// }
// #include<stdio.h>
// int main(){
// int n,m=1;
// scanf("%d",&n);
//   for(int i=1;i<=n;i++){
//       for(int j=1;j<=i;j++){
//         printf("%d",m);
//         m=m+2;
//     }
//     m=1;
//     printf("\n");
//   }
// }
// #include<stdio.h>
// int main(){
// int n;
// scanf("%d",&n);
//   for(int i=1;i<=n;i++){
//       for(int j=1;j<=i;j++){
//         if(i%2!=0)printf("%d",j);
//         else printf("%c",(char)64+j);
//       }
//     printf("\n");
//   }
// }
// #include<stdio.h>
// int main(){
// int n,m;
// scanf("%d" "%d",&n,&m);
//   for(int i=1;i<=n;i++){
//       for(int j=1;j<=n;j++){
//         if(i==1||i==n||j==1||j==n )printf("*");
//         else printf(" ");
//       }
//     printf("\n");
//   }
//}
// #include<stdio.h>
// int main(){
//     int a,n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         if(i%2!=0)a=1;
//         else a=0;
//         for(int j=1;j<=i;j++){
//             printf("%d",a);
//             if(a==1) a=0;
//             else a=1;
//         }
//         printf("\n");
//     }

//    return 0;
// }
// #include <stdio.h>
// int main(){
//     int n,a=1;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         printf("%d\n",a);
//         a=a+2;
//     }

//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+1-i;j++){
//             printf("%c",(char)64+j);
//         }printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>
int main(){
    int a=1;
    for(int i=1;i<=9;i++){
        a++;
        printf("%d\n",a);
    }
    printf("%d",a);
    return 0;
}