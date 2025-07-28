// #include <stdio.h>
// int main(){
//    float r;
//    printf("enter the radius:");
//    scanf("%f",&r);
//    float area=3.14*r*r;
//    printf("area of the circle is %f",area);
//    return 0;
// }
// #include <stdio.h>
// int main(){
//  int x;
//  scanf("%d",&x);
//  int y;
//  scanf("%d",&y);
//  int m=x*y;
//  int a=x+y;
//  printf("multiplication and addition of the two numbers are %d %d", m,a);
//  return 0;

// }
// 
//    int n;
//    printf("enter the number");
//    scanf("%d",&n);
//    if (n<0){
//       n*=-1;
//       printf("mod of the no. is%d",n);
//       }
//    else{
//       printf("mod of the no. is%d",n);
//    }
//    return 0;

// }
// #include <stdio.h>
// int main(){
//    int a;
//    scanf("%d",&a);
//    switch(a){
//       case 2:
//       printf("mkms");
//       break;
//       case 6:
//       printf("mkcbvyms");
//       break;
//       default:
//       printf("fucki");

//    }
// }
//loops
// #include <stdio.h>
// int main(){
//    float a=100;
//    int n;
//    scanf("%d",&n);
//  for(int i=1;i<=n;i++){
//    printf("%f\n",a);
//    a/=2;
//  }
// return 0;
// }
// #include <stdio.h>
// int main(){
//    for(int i=1;i<=100;i++){
//       if (i%2!=0){
//          continue;
//       }
//       printf("%d\n",i);
//    }
// return 0;
// }
// #include <stdio.h>
// int main(){
//    int i=1;
//    while (i<=5)
//    {
//       printf("%d",i);
//       i++;
//    }
//    return 0;
// }
// #include <stdio.h>
// int main(){
//    int n,count=0;
//    scanf("%d",&n);
//    while (n>0)
//    {
//       n/=10;
//       count++;
//    }
//    printf("%d",count);
   
//    return 0;

// }
// #include <stdio.h>
// int main(){
//   int n,s=0,digit;
//   scanf("%d",&n);
//   while(n>0){
//   digit=n%10;
//   s=s+digit;
//   n/=10;
//   }
//   printf("%d",s);
// }
// #include <stdio.h>
// int main(){
//   int a,b,c;
//   printf("enter the numbers for a,b,c");
//   scanf("%d %d %d",&a,&b,&c);
// if (a>b){
//     if(a>c)printf(" %dthe greatest number is,",a);
//     else printf(" %dthe greatest number is",c);
// }
// else{
//     if(b>c)printf("%d is  the greatest number is,",b);
//     else printf("%d is the greatest number is",c);
 
// }

// return 0;
// }
// #include <stdio.h>
// int main(){
// int  x;
//  scanf("%d",&x);
//  switch (x)
//  {
//  case 2:
//    printf("2 was given as input");
//     break;
//     case 3:
//    printf("3 was given as input");
//     break;
//  default:
//    printf("invalid");
    
//  }

// return 0;
// }
// #include <stdio.h>
// int main(){
//     do{
//         int i=1;
// printf("hlo\n");
// i++;
//     } while (i<=10);
    
// return 0;
// }
// #include<stdio.h>
// int main(){
// int n;
// scanf("%d",&n);
//   for(int i=1;i<=n;i++){
//       for(int j=1;j<=n+1-i;j++){
//         printf("%d",j);
//     }
//     printf("\n");
//   }
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
//   int n,a=4;
//   printf("enter the value for n");
//   scanf("%d",&n);
// for(int i=1;i<=n;i++){ 
//  printf("%d\n",a);
//  a=a+3 ;
// }
  
//   return 0;
// }
// #include<stdio.h>
// int main(){
//   int a=0,n;
//   scanf("%d",&n);
//   for(int i=2;i<=n-1;i++){
//     if(n%i==0) {
//       a=1;
//       break;
//     }
//   }
//   if(n==1) printf("neither composite nor prime");
// else if (a==1)printf("composite");

// else  printf("prime");


//   return 0;
// }
// #include<stdio.h>
// int main(){
//  int n,m=1;
//  scanf("%d",&n);
//  for(int i=1;i<=n;i++){
//   for(int j=1;j<=i;j++){
//     printf(" %d",m);
//     m++;
//   }
//   printf("\n");
//  }
//   return 0;
// }
// #include<stdio.h>
// int main(){
//  int n;
//  scanf("%d",&n);
//  for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//       printf(" ");
//     }
//     for(int k=1;k<=2*i-1;k++){
//       printf("%d",k);
//     }printf("\n");
// }
//   return 0;
// }
// #include<stdio.h>
// int main(){
//  int n=5;
//  for(int i=1;i<=n;i++){
//   for(int n1=1;n1<=(n/2)+1-i;n1++){
//     printf(" ");
//   }
//   for(int n2=1;n2<=i;n2++){
//     printf(" *");
 
//  }
//  for(int n3=1;n3<=i;n3++){
//   printf(" ");
// }
// for(int n4=1;n4<=n+1-i;n4++){
//   printf(" *");
 
// }printf("\n");
//  }
// return 0;
// }
// #include<stdio.h>
// int main(){
// int a=0,b=1,n,c;
// scanf("%d",&n);
//  if(n==1)printf("%d",a);
//  else
//   printf("%d\n",a);
//   printf("%d\n",b);
//   for(int i=2;i<n;i++){
//       c=a+b;
//       a=b;
//       b=c;
//       printf("%d\n",c);
//   }
// }
// #include <stdio.h>

// // Function to calculate poweronacci number using recursion
// int poweronacci(int n) {
//     if (n <= 0) 
//         return 0;
//     else if (n == 1) 
//         return 1;
//     else 
//         return poweronacci(n - 1) + poweronacci(n - 2);
// }

// int main() {
//     int n, i;
    
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     printf("poweronacci Series: ");
//     for (i = 0; i < n; i++) {
//         printf("%d ", poweronacci(i));
//     }

//     printf("\n");
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int fac=1;
//  for(int i=1;i<=5;i++){
//     fac*=i;
//  }
//  printf("%d\n",fac);
// }
// #include<stdio.h>
// int main(){
//    int arr[5]={1,2,3,4,5};
//    int brr[5];
//   int i=0,j=4,temp=0;
//   while(i<j){
//    temp=arr[i];
//    arr[i]=arr[j];
//    arr[j]=temp;
//    i++;
//    j--;
//   }
//    for(int i=0;i<5;i++){
//       printf("%d ",arr[i]);
//    }
// }
// #include<stdio.h>
// int main(){
//    int a[2][3]={{1,0,3},{1,2,3}};
//    int b[3][4]={{1,2,0,1},{0,3,3,4},{1,0,4,2}};
//    int r[2][4];
//    int rc=3;
//    for(int i=0;i<3;i++){
//       for(int j=0;j<4;j++){
//          r[i][j]=0;
//          for(int k=0;k<rc;k++)
//          r[i][j]+=a[i][k]*b[k][j];

//       }
//    }
//    for(int i=0;i<2;i++){
//       for(int j=0;j<4;j++){
//          printf("%d ",r[i][j]);
// }printf("\n");}
// }
// #include<stdio.h>
// #include<string.h>
// int main(){
//  char ar[40]="rohan";
//  int k=0;
//  int size=0;
//  while(ar[k]!='\0'){
//  k++;
//  size++;}
// for(int i=0,j=size-1;i<j;i++,j--){
//    char temp=ar[i];
//    ar[i]=ar[j];
//    ar[j]=temp;
// }
// puts(ar);

// }
// #include<stdio.h>
// int min(int a,int b){
//    if(a<b) return a;
//    else    return b;
// }
// int hcf(int a,int b){
//    int hcf;
//    for(int i=1;i<=min(a,b);i++){
//       if(a%i==0 &&b%i==0)
//       hcf =i;
//    }
//    return hcf;
// }
// int main(){
//  printf("%d",hcf(2,4));
// }
// #include<stdio.h>
// int lcm(int a,int b){
//    for(int i=1;i<a*b;i++){
//       if(i%a==0&&i%b==0){
//          return i;
//       }
//    }
//    return a*b;
// }
// int main(){
//    printf("%d",lcm(2,5));
// }
// #include<stdio.h>
// int main(){
// int a=0;
// int b=1,c;
// int n;
// scanf("%d",&n);
// if(n==0) printf("%d",a);
// else if(n==0) {
//    printf("%d",a);
//    printf("%d",b);
// }
// else {
// printf("%d\n",a);
// printf("%d\n",b);
// for(int i=2;i<n;i++){
//    c=a+b;
//    a=b;
//    b=c;
//    printf("%d\n",c);
// }
// }
// }
// #include<stdio.h>
// int power(int n,int a){
//    if (a==0)return 1;
//    return n*power(n,a-1);
// }
// int main(){
   
//    printf("%d\n",power(2,5));
// }
// #include<stdio.h>
// int main(){
//    for(int i=1;i<=4;i++){
//       for(int j=1;j<=4-i;j++){
//          printf(" ");
//       }
//       for(int j=1;j<=2*i-1;j++){
//          printf("*");
//       }printf("\n");

//    }

// }
// #include <stdio.h>
// int main(){
// int fact=1;
// for(int i=1;i<=5;i++){
// fact*=i;
// }
// printf("%d",fact);
// } 
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//         printf("@");
//     }printf("\n");
// }
// }



