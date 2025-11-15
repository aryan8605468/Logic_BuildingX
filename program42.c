#include<stdio.h>
void display(int iNo)
{
    
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {      
        if((iCnt%2)==0) 
        {
            printf("%d\t",iCnt);
        }
    };
}
//time complexity = O(N)

int main()
{
    int iValue;
    printf("Enter number\n");
    scanf("%d",&iValue);
    display(iValue);
    return 0 ;
}