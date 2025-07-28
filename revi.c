// #include <stdio.h>
// int main(){
//   // float x=5;
//   // float y=2;
//   // printf("%f",x/y);
//   int r=5;
//   float v=(4*3.14*r*r*r)/3;
//   printf("\n%f",v);
//   return 0;
// }
// #include<stdio.h>
// int main(){
//     int n=1234;
//     int r=0;
//     while(n>0){
//         r*=10;
//         r=r+(n%10);
//         n/=10;
//     }
//     printf("%d",r);
// }
// #include<stdio.h>
// int min(int a,int b){
//     if(a>b) return b;
//     else return a;
// }
// int hcf(int a,int b){
//     int hcf=0;
//     for(int i=1;i<=min(a,b);i++){
//          if(a%i==0 && b%i==0)
//         hcf=i;
//     }
//     return hcf;
// }
// int main(){
//        printf("%d",hcf(20,4));
// }
// #include <stdio.h>
// int prime(int b, int arr[])
// {
//     for (int i = 0; i < 5; i++)
//     {
//         int isprime = 1;
//         for (int j = 2; j < arr[i]; j++)
//         {
//             if (arr[i] % j == 0)
//             {
//                 isprime = 0;
//                 break;
//             }
//         }
//         if (arr[i] == 1)
//             printf("%dneither prime or composite\n", arr[i]);
//         else if (isprime == 1)
//             printf("%d prime \n", arr[i]);
//         else if (isprime == 0)
//             printf("%d composite\n", arr[i]);
//     }
// }
// int main()
// {
//     int arr[] = {12, 34, 1, 45, 89};
//     prime(5, arr);
// }
// #include<stdio.h>
// int fib(int n){
//     if(n==1) return 0;
//     else if( n==2) return 1;
//     else return fib(n-1)+fib(n-2);
// }
// int main(){
//     for(int i=1;i<=8;i++)
//     printf("%d ",fib(i));
// }
// #include<stdio.h>
// int main(){
//     int a=1,n;
//     scanf("%d",&n);
//     for(int i=2;i<n;i++){
//      if(n%i==0){
//         a=0;
//         break;
//      }
//     }
//     if(n==1)printf("neither prime nor composite");
//     else if (a==1)
//        printf("prime");
//     else printf("composite");

// }
// #include<stdio.h>
// void swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
// int a=5;
// int b=6;
// swap(&a,&b);
// printf("a=%d b=%d",a,b);
// }
// #include<stdio.h>
// int min(int a,int b){
//     if(a>b) return b;
//     else return a;
// }
// int hcf(int a,int b){
//     int hcf;
//     for(int i=1;i<=min(a,b);i++){
//         if(a%i==0 && b%i==0)
//            hcf=i;
//     }
// return hcf;
// }
// int main(){
//      printf("%d",hcf(21,4));
// }
// #include<stdio.h>
// int lcm(int a,int b){
//     for (int i=1;i<=a*b;i++){
//         if(i%a==0&&i%b==0)
//         return i;
//     }
//     return a*b;
// }

// int main(){
//      printf("%d",lcm(15,20));
// }
// #include<stdio.h>
// int fab(int n){
//    if(n==1) return 0;
//    else if(n==2) return 1;
//    else return fab(n-1)+fab(n-2);
// }
// int main(){
//     for(int i=1;i<=7;i++)
//     printf("%d ",fab(i));
// }
// #include<stdio.h>
// int prime(int arr[]){
//    for(int i=0;i<5;i++){
//     int isprime=1;
//     for(int j=2;j<arr[i];j++){
//    if(arr[i]%j==0){
//     isprime=0;
//      break;
//     }
// }
// if(isprime==0)printf("%dcomposite\n",arr[i]);
// else if (isprime==1)  printf("%dprime\n",arr[i]);
// }
// }
// int main(){
//    int arr[5]={22,13,65,12,78};
//    prime(arr);
// }
// #include<stdio.h>
// void reverse(int arr[]){
//    int i=0;
//    int j=4;
//    while(i<=j){
//       int temp=arr[i];
//       arr[i]=arr[j];
//       arr[j]=temp;
//       i++;
//       j--;
//    }
//    return;
// }
// int main(){
//   int arr[5]={1,2,3,4,5};
// reverse(arr);
//   for(int i=0;i<5;i++){
//     printf("%d ",arr[i]);
//   }
// }
// #include<stdio.h>
// #include<string.h>
// int main(){
//   char str[400];
//   puts("enter the string");
//    scanf("%[^\n]s",str);
//    int size=0;
//    int k=0;
//    while(str[k]!='\0'){
//    size++;
//    k++;}
//    for(int i=0,j=size-1;i<=j;i++,j--)
//    {
//       int temp=str[i];
//       str[i]=str[j];
//       str[j]=temp;
//    }
//    puts(str);
// }
// #include<stdio.h>
// int main(){
//    int arr[1][2]={1,2};
//    int brr[2][1]={{1},{3}};
//    int abr[1][1];
//    int ab=2;
//    for(int i=0;i<1;i++){
//       for(int j=0;j<1;j++){
//          abr[i][j]=0;
//       for(int k=0;k<2;k++){
//          abr[i][j]+=arr[i][k]*brr[k][j];
//       }
//       }
//    }
//    for(int i=0;i<1;i++){
//       for(int j=0;j<1;j++){
//          printf("%d ",abr[i][j]);
//       }printf("\n");
//    }
// }
// #include<stdio.h>
// int min(int a,int b){
//     if(a>b)return a;
//     else return b;
// }
// int hcf(int a,int b){
//     int hcf;
//     for(int i=1;i<=min(a,b);i++){
//         if(a%i==0&&b%i==0){
//             hcf=i;
//         }

// }
// return hcf;
// }
// int main(){
//     printf("%d",hcf(40,50));
// }
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char arr[60]="anjnka";

//     int size=0,k=0;
//  while(arr[k]!=0){
//     size++;
//     k++;
//  }
//  for(int i=0,j=size-1;i<=j;i++,j--){
//     int temp=arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
//  }
//  puts(arr);
// }
// #include<stdio.h>
// #include<string.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     getchar();
//    char arr[n];
//    gets(arr);

//    for(int i=0;i<n;i++){
//     if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'){
//         printf("%c ",arr[i]);
//     }
//    }

// }
// #include<stdio.h>
// int main(){
//     int in[2][2]={{1,2},{3,4}};
//     int ou[2][2]={{1,2},{3,4}};
//     int inou[2][2];
//     int on=2;
// for(int i=0;i<2;i++){
//     for(int j=0;j<2;j++){
//         inou[i][j]=0;
//     for(int o=0;o<2;o++){
//         inou[i][j]+=in[i][o]*ou[o][j];
//     }
//     }
// }
// for(int i=0;i<2;i++){
//     for(int j=0;j<2;j++){
//     printf("%d ",inou[i][j]);
//     }    printf("\n");

// }
// }
// #include<stdio.h>
// int main(){
//     int n=8;
//     for(int i=1;i<=n;i++){
//        for(int j=1;j<i;j++) {
//         printf("+");
//        }
//         for(int j=1;j<=n+1-i;j++){
//             printf("%d",j);
//         }printf("\n");}
//     }
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             if(i%2==0)
//             printf("%c",(char)64+j);
//             else
//             printf("%d",j);
//         }printf("\n");
//     }
// }
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=(n/2)+1;i++){
//         for(int j=1;j<=((n/2)+1)-i;j++){
//             printf(" ");
//        }
//         for(int j=1;j<=2*i-1;j++){
//              printf("*");
//         }printf("\n");
// }
// for(int i=1;i<=n/2;i++){
//     for(int j=1;j<=i;j++){
//         printf(" ");
//    }
//     for(int j=1;j<=n-2*i;j++){
//          printf("*");
//     }printf("\n");
// }
// }
// #include<stdio.h>
// int main(){
//     int a;
//     for(int i=1;i<5;i++){
//         if(i%2!=0)a=1;
//         else a=0;
//         for(int j=1;j<=i;j++){
//             printf("%d",a);
//             if(a==1)a=0;
//             else a=1;
//         }printf("\n");
//     }
// }
// #include<stdio.h>
// #include<math.h>
// int fac(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//     return fact;
// }
// int main(){

//     float x=1,s=0;
//     while (x<=3)
//     {
//        s=s+(x/fac(x));
//        x++;
//     }
//     printf("%f",s);
// }
// #include<stdio.h>
// int  sum(int a,int b){
//     return a+b;
// }
// int multiply(int a,int b){
//     return a*b;
// }
// int factorial(int n){
//     int fac=1;
//     for(int i=1;i<=n;i++){
//         fac=fac*i;
//     }
//     return fac;
// }
// int combination(int n,int r){
//     return factorial(n)/(factorial(r)*factorial(n-r));
// }
// int main(){
//     printf("%d %d %d %d",sum(5,8),multiply(5,8),factorial(5),combination(5,2));
// }
// #include<stdio.h>
// int main(){
//  int arr[7]={1,2,3,4,5,6,7},i=0,j=6,temp;
//  while(i<j){
//     temp=arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
//     i++;
//     j--;
//     }
//     for(int i=0;i<7;i++){
//         printf("%d ",arr[i]);
//         }
// }
// #include<stdio.h>
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int trr[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             trr[i][j]=arr[j][i];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ",trr[i][j]);
//         }printf("\n");
//     }
// }
// #include<stdio.h>
// int main(){
//   int n;
//   printf("enter no.");
//   scanf("%d",&n);
//   int a=1;
//  for(int i=2;i<n;i++){
//  if(n%i==0)
//   a=0;}
//   if(a==1)printf("prime");
//   else printf("compo");
//   }
// #include<stdio.h>
// int main(){
//     int a=1;
//   for(int i=1;i<=5;i++){
//     for(int j=1;j<=i;j++){
//         printf("%d ",a);
//         a++;
//     }
//     printf("\n");
//   }
//   }
// #include<stdio.h>
// int min(int a,int b){
//     if(a<b)return a;
//     else b;
// }
// int hcf(int a,int b){
//     int hcf;
//     for(int i=1;i<=min(a,b);i++){
//         if(a%i==0&&b%i==0)hcf=i;
//     }
//     return hcf;
// }
// int main(){
// printf("%d",hcf(20,15));
// }
// #include<stdio.h>
// int lcm(int a,int b){
//     for(int i=1;i<=a*b;i++){
//         if(i%a==0&&i%b==0)
//         return i;
//     }
//     return a*b;
// }
// int main(){
// printf("%d",lcm(20,15));
// }
// #include <stdio.h>
// int main()
// {
//    char s[100];
//    char sen[100];
//    scanf("%s\n", s);
//    scanf("%[^\n]s", sen);
//      printf("%s\n", s);
//    printf("%s", sen);
 
// }
// #include <stdio.h>
// int min(int a,int b){
//     if(a>b) return b;
//     else return a;
// }
// int hcf(int a,int b){
//     if(a==0)return b;
//     if(b==0)return a;
//     int gcd;
//     for(int i=1;i<=min(a,b);i++){
//    if(a%i==0&&b%i==0){
//     gcd=i;
//    }
//    }
//    return gcd;
// }
// int main(){
//    int a,b;
//   scanf("%d %d",&a ,&b);
//   printf("%d",hcf(a,b));
//     return 0;
// }
// #include <stdio.h>

// void update(int *a,int *b) {
//     // Complete this function  
//    *a=*a+*b;
//    if(*a-*b<0) *b=-1*(*a-*b);
//    else *b=*a-*b;
// }

// int main() {
//     int a, b;
//     int *pa = &a, *pb = &b;
    
//     scanf("%d %d", &a, &b);
//     update(pa, pb);
//     printf("%d\n%d", a, b);

//     return 0;
// }
// #include<stdio.h>
// /
// int main(){
//     int s=0;
//     int arr[4]={1,2,3,2};
//     for(int i=0;i<4;i++){
//         for(int j=i+1;j<4;j++){
//         for(int k=j+1;k<4;k++){

//             if(arr[i]+arr[j]+arr[k]==5)s+=1;
//         }
//     }

// }
// printf("%d",s);
// }
// #include<stdio.h>
// int main(){
//     char str[]="habsiman";int k=0,size=0;
//     while(str[k]!='\0'){
//     size++;
//     k++;
// }
// for(int i=0,j=size-1;i<=j;i++,j--){
//        char temp=str[i];
//        str[i]=str[j];
//        str[j]=temp;
// }
// printf("%s",str);
// return 0;
// }
// #include<stdio.h>
// int main(){
//      int arr[2][2]={1,2,3,4};
//      for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             printf("%d",arr[i][j]);
//         }printf("\n");
//      }
     
//      }
// #include<stdio.h>
// #define maxi 10
// int stack[maxi],top=-1;
// void push(){
//     int n;
//     if(top==maxi-1)printf("stack is overflow");
//     else {
//         printf("enter the element");
//         scanf("%d",&n);
//         top++;
//         stack[top]=n;
//     }
// }
// void pop(){
//     int n;
//     if(top==-1){
//         printf("stack is empty");
//     }
//     else{
//         n=stack[top];
//         top--;
//         printf("poped element is %d",n);
//     }
// }
// void display(){
//     if(top==-1)printf("stack is empty");
//     else {
//         for(int i=top;i>=0;i--)
//         printf("\n%d",stack[i]);
//     }
// }
// int main(){
// int choice;
// do{
//     printf("\n-----------stack menu-------------");
//     printf("\n1.push\n2.pop\n3.display\n4.exit");
//     printf("\n--------------------------------");
//     printf("\nenter your choice");
//     scanf("%d",&choice);
//     switch (choice)
//     {
//     case 1:
//        push();
//         break;
//     case 2:
//        pop();
//         break;
//     case 3:
//        display();
//         break;
//     default:
//     printf("invalid choice");
//         break;
//     }
// }while(choice!=4);

// }
// #include<stdio.h>
// #define maxi 10
// int queue[10],front=0,rear=-1;
// void insert(){
//     int n;
//     if(rear==maxi-1)printf("queue is full");
//     else{
//         printf("enter the element");
//         scanf("%d",&n);
//         rear++;
//         queue[rear]=n;
//     }
// }
// void delete(){
//     int n;
//     if(front>rear)printf("queue is empty");
//     else{
//         n=queue[front];
//         front++;
//         printf("deleted element is %d",n);
//     }
// }
// void display(){
//     if(front>rear)printf("queue is empty");
//     else{
//         for(int i=front;i<=rear;i++)
//         printf("%d\n",queue[i]);
//     }
// }
// int main(){
// int choice;
// do{
//     printf("---------------queue menu -------------------");
//     printf("\n1.insert\n2.delete\n3.display\n4.exit");
//     printf("-----------------------");
//     scanf("%d",&choice);
//     switch (choice)
//     {
//     case 1:
//        insert();
//         break;

//     case 2:
//        delete();
//         break;
    
//     case 3:
//        display();
//         break;
//     default:
//     printf("invalid input");
//         break;
//     }

// }
// while(choice!=4);
// }
#include<stdio.h>
#define maxi 10
int cq[maxi],rear=-1,front=-1;
void insert(){
    int n;
    if((rear+1)%maxi==front)
           printf("queue is overflow");
    else{
        printf("enter an element");
        scanf("%d",&n);
        if(rear==-1&&front==-1){
            rear=0;
            front=0;
        }
        else{
            rear=(rear+1)%maxi;
        }
        cq[rear]=n;
    }
}
void delete(){
    int n;
    if(rear==-1&&front==-1)
      printf("queue is empty");
    else{
        n=cq[front];
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
            front=(front+1)%maxi;
            printf("deleted element%d",n);
        }

    }
}      
void display(){
int i;
    if(rear==-1&&front==-1)
    printf("queue is empty");


    else {
        printf("elements of queue");
        for(i=front;i!=rear;i=(i+1)%maxi){
            printf("%d",cq[i]);
        }
        printf("%d",cq[i]);
    }
    }


int main(){
int choice;
do{
    printf("---------\ncircular queue-------------");
    printf("\n1.insert\n2.delete\n3.display\n4.exit");
    printf("enter your choice");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        insert();
        break;
    case 2:
        deletet();
        break;
    case 3:
        display();
        break;
    
    default:
    printf("invalid input");
        break;
    }
}
while (choice!=4);
}



















