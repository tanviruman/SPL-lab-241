#include<stdio.h>
int main(){
int n,row,col,number;
printf("Enter N: ");
scanf("%d",&n);

for(row=1;row<=n;row++){
number=row;

for(col=0;col<row;col++){
printf("%d", number++);
}
printf("\n");
}
return 0;
}
