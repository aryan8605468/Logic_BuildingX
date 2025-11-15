#include<stdio.h>
void display(int iNo)
{
    
    int iCnt=0;
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d\t",iCnt);
    };
}

int main()
{
    int iValue;
    printf("Enter number\n");
    scanf("%d",&iValue);
    display(iValue);
    return 0 ;
}