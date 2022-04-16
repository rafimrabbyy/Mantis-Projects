#include <iostream>
using std::cout;
using std::cin;
int main()
{
     /*
        Team Mantis!
        Solving problem 2;
    */
int x, y, z;
int a, b, c;
cin>>x>>y>>z;
if(x>y)
{
a = x;
b = y;
}
else
{
a = y;
b = x;
}
if(a>z && b>z)
{
cout<<a<<"\n"<<b<<"\n"<<z;
}
else if (a<z)
{
cout<<z<<"\n"<<a<<"\n"<<b;
}
else if (a>z && b<z)
{
cout<<a<<"\n"<<z<<"\n"<<b;
}
cout<<"\n";
cout<<"\n"<<x<<"\n"<<y<<"\n"<<z;
return 0;
}