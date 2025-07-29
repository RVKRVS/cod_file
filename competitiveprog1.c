#include<stdio.h>
int main(){
    int row,col,s=0,d=0;
    printf("enter no.of rows");
    scanf("%d",&row);
    printf("enter no.of cols");
    scanf("%d",&col);
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==0)s+=1;
            else d+=1;
        }
    }
    if(s>d)printf("it is a sparse matrix");
    else printf("it is dense matrix");
}
#include<stdio.h>
int main(){
    int row,col,s=0;
    printf("enter no.of rows");
    scanf("%d",&row);
    printf("enter no.of cols");
    scanf("%d",&col);
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==0)s+=1;
        }
    }
   printf("no. of zeros is %d",s);
}
#include<stdio.h>
int main(){
    int row,col,s=0;
    printf("enter no.of rows");
    scanf("%d",&row);
    printf("enter no.of cols");
    scanf("%d",&col);
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int a=0;
    int b=0;
    while(arr[a][b]==1){
        s+=1;
        a++;
        b++;
    }
    if(s==row)printf("it is a identity matrix");
    else printf("it's not a idetity matrix");
  
}
#include<stdio.h>
int main(){
    int row,col,s=0;
    printf("enter no.of rows");
    scanf("%d",&row);
    printf("enter no.of cols");
    scanf("%d",&col);
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int a=0;
    int b=0;
    while(a<row){
        s+=arr[a][b];
        a++;
        b++;
    }
 printf("sum of diagonal elements is %d",s);
  
}