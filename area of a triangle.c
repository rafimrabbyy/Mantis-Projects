#include<stdio.h>

int main()
{
    double base;
    double height;

        printf("Enter base of the triangle: ");
        scanf("%lf",&base);
        printf("Enter height of the triangle: ");
        scanf("%lf",&height);
     double area = base * height * 0.5;
        printf("Area of the triangle = %.2lf Sq units",area);//Specified decimals for visual preference

    return 0;
}

