#include<stdio.h>
void display(int iNo)
{
    
    int iCnt=0;
    for(iCnt=2;iCnt<=iNo;iCnt+=2)
    {       
            printf("%d\t",iCnt);
    };
}
//time complexity = O(N/2)

int main()
{
    int iValue;
    printf("Enter number\n");
    scanf("%d",&iValue);
    display(iValue);
    return 0 ;
}