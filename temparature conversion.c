#include<stdio.h>

int main()
{
    float centigrade;

        printf("Enter temperature in Celsius = ");
        scanf("%f",&centigrade);
        printf("Temperature in Fahrenheit =%.2f\n",centigrade+32); //specified decimals for visual preference


    return 0;
}

