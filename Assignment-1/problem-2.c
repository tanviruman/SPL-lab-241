#include<stdio.h>
int main()
{
int number,odd=1;
printf("Enter :");
scanf("%d",&number);

for(int i=1;i<=number;i++)
{

    printf("%d",odd);

    odd+=2;
    if(i!=number){

        printf(",");

}
}
return 0;
}
