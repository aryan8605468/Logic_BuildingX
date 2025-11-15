/*
Start
    accept no and store it in no1
    divide no by 2
    if the remainder is 0
        then display as Even
    otherwise
        display as odd
Stop
*/
#include<stdio.h>
void CheckEvenOdd(int iNo)
{
    int iRem=0;
    iRem=iNo  %  2  ;
    if(iRem==0)
    {
        printf("it is even number\n");
    }
    else {
        printf("it is odd number\n");

}


}
int main()
{
    int iValue=0;
    printf("enter number");
    scanf("%d",&iValue);
    CheckEvenOdd(iValue);
    return 0;
}