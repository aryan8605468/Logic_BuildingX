/* 
step 1 - understand the problem statement
step 2 - write the algorithm 
step 3 - decide prog lang 
step 4 - write the prog
step 5 - test the prog 
*/
 
/*
   Algorithm :
    START
        Accept first no as no1
        Accept second no as no2
        Perform addition of no1 & no2
        Display the addition on screen 
    STOP
*/

#include<stdio.h>

float AdditionTwoNumbers(float fNo1 ,float fNo2 )
{
    float fSum=0.0f;
    fSum = fNo1 + fNo2 ;// business logic
    return fSum;
}


int main()
{
    float fValue1 = 0.0f , fValue2 = 0.0f , fRet = 0.0f;
    printf("enter first number : \n");
    scanf("%f",&fValue1);

    printf("enter second number : \n");
    scanf("%f",&fValue2);

    fRet=AdditionTwoNumbers(fValue1,fValue2);

    printf("addition is %f\n",fRet);
    

    return 0;

}