#include<stdio.h>

    void a(int x)
    {
        for(int i = 0,j=x;i<x;i++)
        {
            printf("%d",j);
        }
    }

    void b(int x)
    {
          for(int i = 0;i<x;i++)
        {
            printf("*");
        }
    }
    void c(int x)
    {


          for(int i = 0,j =x;i<x;i++)
        {
            printf("%d ",j);
            j++;
        }

    }

    int main()
{

    for(int i = 1;i<=4;i++)
    {
           a(i);
           printf("\n");

    }
    printf("\n");
for(int i = 1;i<=4;i++)
    {
           b(i);
           printf("\n");

    }
    printf("\n");
int j = 1;

for(int i = 1;i<=4;i++)
    {

           c(i);
           printf("\n");
           j++;

    }
    return 0;
}
