// #include<stdio.h>
// int factorial(int n){
//   int fact=1;
//   for(int i=1;i<=n;i++)
//    fact*=i;
//    return fact;}
// int combination(int n,int r){
//   int ncr=factorial(n)/(factorial(n-r)*factorial(r));
//     return ncr;
// }
// int main(){
//   int n;
//   printf("enter number n");
//   scanf("%d",&n);
//   int r;
//   printf("enter number r");
//   scanf("%d",&r);
//   printf("%d",combination(n,r));
// }
// #include<stdio.h>
// int factorial(int a){
//   int fact=1;
//    for(int i=1;i<=a;i++) fact*=i;
//    return fact;
// }
// int ncr(int x,int y){

//  return factorial(x)/(factorial(x-y)*factorial(y));
// }
// int main(){
// int n,r;
// scanf("%d %d",&n ,&r);
// int final=ncr(n,r);
// printf("%d",final);
// return 0;
// }
// #include <stdio.h>
// int factorial(int a)
// {
//   int fact = 1;
//   for (int i = 1; i <= a; i++)
//     fact *= i;
//   return fact;
// }
// int ncr(int x, int y)
// {

//   return factorial(x) / (factorial(x - y) * factorial(y));
// }
// int main()
// {
//   int n;
//   scanf("%d", &n);
//   for (int i = 0; i <= n; i++)
//   {
//     for (int j = 0; j <= i; j++)
//     {
//       int icj = ncr(i,j);
//       printf("%d", icj);
//     }
//     printf("\n");
//   }
//   return 0;
// }
// #include <stdio.h>
// int fact(int n){
//   int fact=1;
//   for(int i=1;i<=n;i++){
//       fact*=i;
// }
//   return fact;
// }
// int comb(int n,int r){
 
//   int x=fact(n)/(fact(n-r)*fact(r));
//   return x;
// }
// int main(){
//   int n,r;
//   scanf("%d %d",&n,&r);
//   int y=comb(n,r);
//   printf("%d",y);
// }
// #include<stdio.h>
// int fact(int x){
//   int fact=1;
//   for(int i=1;i<=x;i++)
//   fact*=i;
//   return fact;
// }

// int main(){
//   int npr();//function prototype
//   printf("%d",npr(5,2));
//   return 0;
// }
// int npr(int n,int r){
  
//   return  fact(n)/fact(n-r);
// }

// #include<stdio.h>
// int swap(int* a,int*b){
//   int temp=*a;
//   *a=*b;
//   *b=temp;
  
// }
// int main(){
//   int a=5,b=6;
//   swap(&a,&b);
//   printf("a=%d b=%d",a,b);
//   return 0;
// }
// #include<stdio.h>
// int min(int a,int b){
//   if(a>b)return b;
//   else return a;
// }
// int gcd(int a,int b){
//   int hcf;
//   for(int i=1;i<=min(a,b);i++){
//     if(a%i==0 && b%i==0)
//     hcf=i;
//   }
//   return hcf;
// }
// int main(){
//   int a;
//   printf("enter the number");
//   scanf("%d",&a);
//   int b;
//   printf("enter the number");
//   scanf("%d",&b);
//   printf("the hcf of %d and %d is %d",a,b,gcd(a,b));

// }
// #include<stdio.h>
// int lcm(int a,int b){
//     for(int i=1;i<=a*b;i++){
//     if(i%a==0 && i%b==0)
//     return i;
//   }
 
//   return a*b;
// }
// int main(){
//   int a;
//   printf("enter the number");
//   scanf("%d",&a);
//   int b;
//   printf("enter the number");
//   scanf("%d",&b);
//   printf("the lcm of %d and %d is %d",a,b,lcm(a,b));
// }

