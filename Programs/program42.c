// Write a program which accept temperature in Fahrenheit and convert it into celsius.
// (1 celsius = (Fahrenheit -32) * (5/9))
// Input :   10 
// Output: -12.2222     (10-32) * (5/9)

#include<stdio.h>

double FhToCs(float fTemp)
{
    double iAns = 0.0;

    iAns = (fTemp - 32) * (5/9);
    return iAns; 
}

int main()    
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter the temperature in fahrenheit\n");
    scanf("%d",&fValue);

    dRet = FhToCs(fValue);
    printf("Celsius of the temperature is : %f",dRet);

    return 0;

}


