////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////


#include<stdio.h>                         //For Input-Output
#include<stdbool.h>                       //For Bool datatype

////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description :   Used to check number is even or odd
//  Input :         Integer
//  Output :        Boolean
//  Author :        Aryan Hanumant Kakade
//  Date :          10/10/2025
//
////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    int iRem=0;
    iRem=iNo  %  2  ;
    if(iRem==0)
    {   return true; }
    else 
    { return false;  }


}
////////////////////////////////////////////////////////
//
//  Entry Point Function of Application
//
////////////////////////////////////////////////////////
int main()
{
    int iValue=0;
    bool bRet = false;
    printf("enter number \n");
    scanf("%d",&iValue);
    bRet= CheckEvenOdd(iValue);
    
    if(bRet==true)
    {
        printf("%d is even number",iValue);
    }
    else
    {
        printf("%d is odd number",iValue);
    }

    return 0;
}