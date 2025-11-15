/*
   Algorithm :
    START
        Accept first no as no1
        Accept second no as no2
        if input is negative then convert it into positive
        Perform addition of no1 & no2
        Display the addition on screen 
    STOP
*/

///////////////////////////////////////////////////
//  Required Header File
///////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////
//
//  Function Name  : AdditionTwoNumbers
//  Description :    It id used to perform Addition
//  Input :          Float , Float
//  Output :         Float
//  Author :         Aryan Hanumant Kakade 
//  Date :           09/10/2025
//  
///////////////////////////////////////////////////

float AdditionTwoNumbers(
    float fNo1 ,                                        //First Input
    float fNo2                                          //Second Input
)
{
 
    float fSum=0.0f;                                    //To Store Result
                                                        //updater 
    if ( fNo1<0.0f)
    {
        fNo1= -fNo1;
    }
    if ( fNo2<0.0f)
    {
        fNo2= -fNo2;
    }
    fSum = fNo1 + fNo2 ;                                // business logic
    return fSum;
}   //end of AdditionTwoNumbers

///////////////////////////////////////////////////
// 
//  Entry Point Fuction for the application
//
///////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0f , fValue2 = 0.0f ;             //To accept User Input
    float fRet = 0.0f;                                  //To store the result
    printf("enter first number : \n");
    scanf("%f",&fValue1);

    printf("enter second number : \n");
    scanf("%f",&fValue2);
      
    fRet=AdditionTwoNumbers(fValue1,fValue2);           //Method call

    printf("addition is %f\n",fRet);
    

    return 0;

}   // End of main
///////////////////////////////////////////////////
//  Testcases successfully handled by the application
//  Input1 : 10.5  Input2 : 3.2  Output : 13.7
//  Input1 : -10.5 Input2 : 3.2  Output : 13.7
//  Input1 : 10.5  Input2 : -3.2 Output : 13.7
//  Input1 : 10.5  Input2 : 0.0  Output : 13.7
///////////////////////////////////////////////////