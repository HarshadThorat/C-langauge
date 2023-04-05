// Write a program which accept width & height of rectangle from user and calculate its area. 
// (Area =  Width * Height)
// Input : 5.3     9.78
// Output: 51.834

#include<stdio.h>

double RectangleArea(float Width, float Height)
{
    double Area = 0.0;

    Area = Width * Height;
    return Area;

}

int main()
{
    float fValuel = 0.0;
    float fValue2 = 0.0; 
    double dRet = 0.0;

    printf("Enter width\n");
    scanf("%f",&fValuel);

    printf("Enter height\n");
    scanf("%f",&fValue2);

    dRet = RectangleArea(fValuel, fValue2);

    printf("Area of Rectangle is : %f",dRet);

    return 0;
}    