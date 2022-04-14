#include<stdio.h>

int main()
{
   int days;

        printf("Enter days: ");
        scanf("%d",&days);
        printf("%d Days = %d Year %d Week %d day(s)",days,days/365,days%365,days%365%7);

    return 0;
}

