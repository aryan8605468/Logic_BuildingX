#include<stdio.h>
int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("enter number 1 :");
    scanf("%d",&iValue1);
    printf("enter number 2 :");
    scanf("%d",&iValue2);
    if((iValue1%iValue2)==0)
    {
        printf("completely divisible");
    } 
    else{
        printf("it is not divisible");
    }   


    return 0 ;
}