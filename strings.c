// #include<stdio.h>
// int main(){
//    char r[]="physicswallah";
//    int c=0,i=0;
//    while(r[i]!='\0')
//    c+=1;
//    printf("%c",r[i]);
//    i++;

// return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main(){
//    char r[55];
//    gets(r);
//    puts(r);

// return 0;
// }
#include<stdio.h>
#include<string.h>
int main(){
    char str[500];
    gets(str);
    int size=0,k=0;
    while(str[k]!='\0'){
      size++;
      k++;
    }
    for(int i=0,j=size-1;i<=j;i++,j--){
      char temp=str[i];
      str[i]=str[j];
      str[j]=temp;
    }
    puts(str);
}