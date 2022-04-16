#include <iostream>
using std::cout;
using std::cin;

int main()

{
      /*
        Team Mantis!
        Solving problem 3;
    */
unsigned int x,a,b;
cin>>x;
    if (x%2 == 0)

    {
            x = x+1;
            cout<<x<<"\n";

    for (int i = 0; i < 5; i++)

        {   
            x = x+2;
            cout<<x<<"\n";
        }
    }
    else
    {
            cout<<x<<"\n";
            for (int i = 0; i < 5; i++)
        {
            x = x+2;
            cout<<x<<"\n";
        }

    }
return 0;
}