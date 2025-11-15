#include<stdio.h>
void display(int iNo)
{
    
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    };
}

int main()
{
    display(7);
    return 0 ;
}