#include <iostream>

using std::cout;

using std::cin;

int main()

/* Team Mantis!
 Solving Problem 1
 */
{
int A;
int B;
int R;

cin >>A>>B;
    if(A>B)
        {
            R = A%B;
        }
    else
        {
            R = B%A;
        }
    if(R == 0)
        {
            cout<<"Sao Multiplos";
        }
    else
        {
            cout<<"Nao sao Multiplos";
        }
return 0;
}