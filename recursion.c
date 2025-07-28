// #include<stdio.h>
// #include<string.h>
// void increase(int x,int n){
//     if(x>n)return;
//     printf("%d\n",x);
//     increase(x+1,n);
//     return;   
// }
// int main(){
//   int n;
//   scanf("%d",&n);
//   increase(1,n);
//   return 0;
// }
// #include <stdio.h>
// int fact(int a,int b){
//   if(b==0) return 1;
//    return a*fact(a,b-1);
// }
// int main(){
//   int result=fact(2,5);
//   printf("%d",result);
//   return 0;
// }
// #include <stdio.h>
// void decreasing(int n){
//   if (n==0) return;
//   printf("%d\n",n);
//   decreasing(n-1);
// }
// int main(){
//    decreasing(9);
//   return 0;
// }
// #include <stdio.h>
// void increasing(int n){
//   int a=1;
//   if (a==n) return;
//   printf("%d\n",n);
//   increasing(a+1);
// }
// int main(){
//    increasing(9);
//   return 0;
// }
// #include<stdio.h>
// void greeting(int a,int n){
//   if (a==n+1) return  ;
//   printf("%d\n",a);
//   greeting(a+1,n);
//   return ;
// }
// int main(){
// greeting(1,5);
// }
// #include<stdio.h>
// int fib(int n){
//   if (n==1) return 0;
//   else if(n==2)return 1;
//   return fib(n-1)+fib(n-2);
// }
// int main(){
//   for(int i=1;i<8;i++)
//   printf("%d ",fib(i));
// }
// #include <stdio.h>
// int power(int a,int b){
//   if(b==0) return 1;
//   return a*power(a,b-1);
// }
// int main(){
//  printf("%d",power(2,5));
// }