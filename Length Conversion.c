#include<stdio.h>

int main()
{
    float centimeter;

        printf("Enter length in centimeter = ");
        scanf("%f",&centimeter);
        printf("Length in meter =%.3f\n",centimeter/100); //specified decimals for visual preference
       printf("Length in kilometer =%.3f",centimeter/100000);

    return 0;
}
