#include<stdio.h>
void display()
{
    
    int iCnt=0;
    iCnt=1;
    while(iCnt<=5)
    {
        printf("%d\t",iCnt);
        iCnt++;
    };
}

int main()
{
    display();
    return 0 ;
}